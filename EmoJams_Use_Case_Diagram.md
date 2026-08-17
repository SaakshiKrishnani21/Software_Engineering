# UML Use Case Diagram – EmoJams

## Problem Statement

**EmoJams – Music Playlist Generator Based on Your Emojis** is a system that generates personalized music playlists based on emojis selected by the user. The system identifies the mood represented by the selected emojis, recommends suitable songs, generates a playlist, and displays it to the user.

## Use Case Diagram

A **UML Use Case Diagram** represents the functional requirements of a system and shows how actors interact with the system. It consists mainly of **actors, use cases, system boundary, and relationships**.

For the EmoJams system, the primary actor is the **User**. The User interacts with the system by selecting emojis and viewing the generated playlist.
## Use Case Diagram

![EmoJams Use Case Diagram](use%20case%20dig.png)

### Actor

* **User** – Selects emojis representing a mood and views the personalized music playlist.

### Use Cases

* **Select Emojis** – User selects emojis representing their mood.
* **Identify Mood** – System identifies the mood associated with the selected emojis.
* **Recommend Songs** – System recommends songs suitable for the identified mood.
* **Generate Playlist** – System generates a personalized playlist from the recommended songs.
* **View Playlist** – User views the generated playlist.

### Relationships

The use cases are connected using `<<include>>` relationships to represent the sequence of required system functionality:

**Select Emojis → Identify Mood → Recommend Songs → Generate Playlist → View Playlist**

The Use Case Diagram provides a clear representation of how the **User interacts with the EmoJams system to obtain a personalized music playlist based on selected emojis**.
