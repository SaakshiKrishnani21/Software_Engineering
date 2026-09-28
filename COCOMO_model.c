#include <stdio.h>
#include <math.h>

// Structure to store COCOMO constants
typedef struct {
    double a;
    double b;
    double c;
    double d;
} COCOMO_Constants;

int main() {
    double kloc, costPerPM;
    int modeChoice;

    // COCOMO coefficients: {a, b, c, d}
    // Formula:
    // Effort = a * (KLOC ^ b)
    // Development Time = c * (Effort ^ d)

    COCOMO_Constants modes[3] = {
        {2.4, 1.05, 2.5, 0.38},  // Organic
        {3.0, 1.12, 2.5, 0.35},  // Semi-Detached
        {3.6, 1.20, 2.5, 0.32}   // Embedded
    };

    char *modeNames[3] = {
        "Organic",
        "Semi-Detached",
        "Embedded"
    };

    printf("=====================================================\n");
    printf("        COCOMO ESTIMATION MODEL (COST & EFFORT)\n");
    printf("=====================================================\n");

    // Input: Project size
    printf("Enter project size in KLOC: ");
    if (scanf("%lf", &kloc) != 1 || kloc <= 0) {
        printf("Invalid KLOC input! Value must be greater than 0.\n");
        return 1;
    }

    // Input: Project mode
    printf("\nSelect Project Category:\n");
    printf("1. Organic      - Small team, well-understood requirements\n");
    printf("2. Semi-Detached - Medium size, mixed experience\n");
    printf("3. Embedded     - Complex constraints, tight coupling\n");

    printf("Enter choice (1-3): ");
    if (scanf("%d", &modeChoice) != 1 ||
        modeChoice < 1 || modeChoice > 3) {
        printf("Invalid category selection! Exiting...\n");
        return 1;
    }

    // Input: Cost per Person-Month
    printf("Enter average cost per Person-Month: ");
    if (scanf("%lf", &costPerPM) != 1 || costPerPM < 0) {
        printf("Invalid cost input!\n");
        return 1;
    }

    // Convert choice to array index
    int index = modeChoice - 1;

    COCOMO_Constants selected = modes[index];

    // COCOMO calculations
    double effort = selected.a * pow(kloc, selected.b);
    double devTime = selected.c * pow(effort, selected.d);
    double staffSize = effort / devTime;
    double productivity = (kloc * 1000.0) / effort;
    double totalCost = effort * costPerPM;

    // Display results
    printf("\n=====================================================\n");
    printf("                 ESTIMATION RESULTS\n");
    printf("=====================================================\n");

    printf("Selected Mode             : %s\n", modeNames[index]);
    printf("Project Size              : %.2f KLOC (%.0f LOC)\n",
           kloc, kloc * 1000);

    printf("-----------------------------------------------------\n");

    printf("Estimated Effort          : %.2f Person-Months\n",
           effort);
    printf("Development Time          : %.2f Months\n",
           devTime);
    printf("Average Staff Size        : %.2f Persons\n",
           staffSize);
    printf("Estimated Productivity    : %.2f LOC/Person-Month\n",
           productivity);
    printf("Total Estimated Cost      : %.2f\n",
           totalCost);

    printf("=====================================================\n");

    return 0;
}
