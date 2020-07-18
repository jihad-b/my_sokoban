/*
** EPITECH PROJECT, 2019
** gt
** File description:
** gt
*/

#include "./../includes/my.h"

char **get_dest_up(char **dest, int x, int y)
{
    if (dest[y-1][x] == '#' || (dest[y-1][x] == 'X' && dest[y-2][x] == 'X'))
        x = x;
    else if ((dest[y-2][x] == '#' && dest[y-1][x] == 'X'))
        x = x;
    else {
        up(dest, x, y);
        y = y - 1;
    }
    return dest;
}

char **get_dest_down(char **dest, int x, int y)
{
    if (dest[y+1][x] == '#' || (dest[y+1][x] == 'X' && dest[y+2][x] == 'X'))
        x = x;
    else if ((dest[y+2][x] == '#' && dest[y+1][x] == 'X'))
        x = x;
    else {
        down(dest, x, y);
        y = y + 1;
    }
    return dest;
}

char **get_dest_right(char **dest, int x, int y)
{
    if (dest[y][x+1] == '#' || (dest[y][x+1] == 'X' && dest[y][x+2] == 'X'))
        x = x;
    else if ((dest[y][x+2] == '#' && dest[y][x+1] == 'X'))
        x = x;
    else {
        right(dest, x, y);
        x = x + 1;
    }
    return dest;
}

char **get_dest_left(char **dest, int x, int y)
{
    if (dest[y][x-1] == '#' || (dest[y][x-1] == 'X' && dest[y][x-2] == 'X'))
        x = x;
    else if ((dest[y][x-2] == '#' && dest[y][x-1] == 'X'))
        x = x;
    else {
        left(dest, x, y);
        x = x - 1;
    }
    return dest;
}
