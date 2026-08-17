# UML Class Diagram – EmoJams

## Problem Statement

**EmoJams – Music Playlist Generator Based on Your Emojis** is a system that generates personalized music playlists based on emojis selected by the user. 
The system identifies the mood represented by the selected emojis, recommends suitable songs, generates a playlist, and displays it to the user.

## Class Diagram

A **UML Class Diagram** represents the structural view of a system and shows the classes, attributes, methods, and relationships between classes. It describes the objects involved in the system and how they are connected.

For the EmoJams system, the main classes are **User, Emoji, Mood, Song, and Playlist**. 
These classes represent the user, selected emojis, identified mood, recommended songs, and generated playlist.

![EmoJams UML Class Diagram](class%20dig.png)

The UML Class Diagram represents the structural view of the EmoJams system and shows the classes, attributes, methods, and relationships between them.

### Classes

- **User** – Represents the user who selects emojis and views the generated playlist.
- **Emoji** – Represents the emoji selected by the user to indicate a mood.
- **Mood** – Represents the mood identified from the selected emoji.
- **Song** – Represents a song recommended according to the identified mood.
- **Playlist** – Represents the personalized playlist generated for the user.

### Attributes and Methods

- **User**
  - Attributes: `userId`, `name`, `email`
  - Methods: `selectEmoji()`, `viewPlaylist()`

- **Emoji**
  - Attributes: `emojiId`, `emojiSymbol`, `description`
  - Methods: `getMood()`

- **Mood**
  - Attributes: `moodId`, `moodName`
  - Methods: `identifyMood()`, `getMoodType()`

- **Song**
  - Attributes: `songId`, `title`, `artist`, `genre`
  - Methods: `getSongDetails()`, `recommendSong()`

- **Playlist**
  - Attributes: `playlistId`, `playlistName`, `songs`
  - Methods: `createPlaylist()`, `addSong()`, `displayPlaylist()`

### Relationships

The classes are connected through relationships that represent their interaction within the EmoJams system:

**User → Emoji → Mood → Song → Playlist**

- **User — Emoji:** A user can select multiple emojis.
- **Emoji — Mood:** An emoji is associated with a mood.
- **Mood — Song:** A mood can have multiple suitable songs.
- **User — Playlist:** A user can have multiple playlists.
- **Playlist — Song:** A playlist can contain multiple songs.


The Class Diagram provides a clear representation of the **structure of the EmoJams system and the relationships between its main classes**, showing how user-selected emojis are used to identify moods and generate personalized music playlists.
