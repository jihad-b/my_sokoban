/*
** EPITECH PROJECT, 2019
** p
** File description:
** p
*/

#include "./../includes/my.h"

int get_y_up(char **dest, int x, int y)
{
    if (dest[y-1][x] == '#' || (dest[y-1][x] == 'X' && dest[y-2][x] == 'X'))
        y = y;
    else if ((dest[y-2][x] == '#' && dest[y-1][x] == 'X'))
        y = y;
    else {
        up(dest, x, y);
        y = y - 1;
    }
    return y;
}

int get_y_down(char **dest, int x, int y)
{
    if (dest[y+1][x] == '#' || (dest[y+1][x] == 'X' && dest[y+2][x] == 'X'))
        y = y;
    else if ((dest[y+2][x] == '#' && dest[y+1][x] == 'X'))
        y = y;
    else {
        down(dest, x, y);
        y = y + 1;
    }
    return y;
}

int get_x_right(char **dest, int x, int y)
{
    if (dest[y][x+1] == '#' || (dest[y][x+1] == 'X' && dest[y][x+2] == 'X'))
        y = y;
    else if ((dest[y][x+2] == '#' && dest[y][x+1] == 'X'))
        y = y;
    else {
        right(dest, x, y);
        x = x + 1;
    }
    return x;
}

int get_x_left(char **dest, int x, int y)
{
    if (dest[y][x-1] == '#' || (dest[y][x-1] == 'X' && dest[y][x-2] == 'X'))
        y = y;
    else if ((dest[y][x-2] == '#' && dest[y][x-1] == 'X'))
        y = y;
    else {
        left(dest, x, y);
        x = x - 1;
    }
    return x;
}
