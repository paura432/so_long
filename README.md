# so_long

**so_long** is a small 2D game project developed using the MinilibX library. The player navigates through a simple map, collecting items and reaching the exit, while avoiding obstacles. The project tests your understanding of basic game mechanics, window management, and graphical rendering in C.

## Overview

- **Objective**: Create a small game where the player can move through a map, collect items, and reach an exit.
- **Libraries Used**: The project primarily uses the MinilibX library for rendering graphics.
- **Game Elements**: The game consists of a player, collectibles, walls, an exit, and possibly enemies (optional).

## Game Rules

- The player can move in four directions: up, down, left, and right.
- The player must collect all items (often called "collectibles") before reaching the exit.
- The game ends when the player successfully reaches the exit after collecting all items.
- The player cannot walk through walls or obstacles.
- The game must track and display the number of movements made by the player.

## Example of a Map

The map for the game is a rectangular layout, defined in a `.ber` file. Each character in the file represents a different element of the game:

- **`1`**: Wall (impassable terrain).
- **`0`**: Empty space (the player can walk here).
- **`P`**: Player's starting position.
- **`C`**: Collectible item.
- **`E`**: Exit (only accessible after collecting all `C` items).
  
Example:

111111
1P0C01
100001
1C0E01
111111


## Functionality Requirements

- **Map Validation**: The map must be valid and meet several criteria:
  - It must be surrounded by walls (`1`).
  - It must have at least one exit (`E`), one player (`P`), and one collectible (`C`).
  - It must be rectangular (all rows must have the same length).
- **Movement Tracking**: Display the number of movements the player has made.
- **Rendering**: Use MinilibX to render the map and the player’s movements graphically.
  
## Example Usage

```bash
./so_long map.ber
```
This command starts the game, loading the map defined in the `map.ber` file.

## Controls

- **W**: Move up
- **A**: Move left
- **S**: Move down
- **D**: Move right
- **ESC**: Exit the game

## Notes

- **Memory Management**: Ensure there are no memory leaks when the game exits.
- **Error Handling**: Handle errors gracefully (e.g., invalid map files, incorrect inputs).
- **Extension**: The project can be extended to include enemies or other features for extra difficulty and complexity.

## Example Screenshots

- **Initial Screen**: The map is loaded, and the player is placed in the starting position.
- 
![Captura desde 2024-09-26 22-06-39](https://github.com/user-attachments/assets/3ef8038b-384b-4406-b7ae-ac648804bc8b)

- **In-game Screen**: The player moves around, collects items, and heads toward the exit.

![Captura desde 2024-09-26 22-08-19](https://github.com/user-attachments/assets/c0c11c2f-c203-4c3d-b261-edcf097ffc27)


