# my_sokoban

Hello to my project!

#Usage

./my_sokoban map

#Description

map file representing the warehouse map, containing ‘#’ for walls, ‘P’ for the player, ‘X’ for boxes and ‘O’ for storage locations.

The player is confined to the board, and may move horizontally or vertically onto empty squares (never through walls or boxes). The player can also move into a box, which pushes it into the square beyond. Boxes may not be pushed into other boxes or walls, and they cannot be pulled. The number of boxes is equal to the number of storage locations. The puzzle is solved when all boxes are at storage locations.
