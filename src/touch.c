/*
** EPITECH PROJECT, 2019
** touch
** File description:
** touch
*/

char **left(char **dest, int x , int y)
{
    if ((dest[y][x-2] == ' ' && dest[y][x-1] == 'X')) {
        dest[y][x-1] = 'P';
        dest[y][x-2] = 'X';
        dest[y][x] = ' ';
    }
    else if (dest[y][x-2] == 'O' && dest[y][x-1] == 'X') {
        dest[y][x-2] = 'X';
        dest[y][x-1] = 'P';
        dest[y][x] = ' ';
    } else {
        dest[y][x-1] = 'P';
        dest[y][x] = ' ';
    }
    return dest;
}

char **right(char **dest, int x , int y)
{
    if ((dest[y][x+2] == ' ' && dest[y][x+1] == 'X')) {
        dest[y][x+1] = 'P';
        dest[y][x+2] = 'X';
        dest[y][x] = ' ';
    }
    else if (dest[y][x+2] == 'O' && dest[y][x+1] == 'X') {
        dest[y][x+2] = 'X';
        dest[y][x+1] = 'P';
        dest[y][x] = ' ';
    } else {
        dest[y][x+1] = 'P';
        dest[y][x] = ' ';
    }
    return dest;
}

char **up(char **dest, int x, int y)
{
    if ((dest[y-2][x] == ' ' && dest[y-1][x] == 'X')) {
        dest[y-1][x] = 'P';
        dest[y-2][x] = 'X';
        dest[y][x] = ' ';
    }
    else if (dest[y-2][x] == 'O' && dest[y-1][x] == 'X') {
        dest[y-2][x] = 'X';
        dest[y-1][x] = 'P';
        dest[y][x] = ' ';
    } else {
        dest[y-1][x] = 'P';
        dest[y][x] = ' ';
    }
    return dest;
}

char **down(char **dest, int x, int y)
{
    if (dest[y+2][x] == 'O' && dest[y+1][x] == 'X') {
        dest[y+2][x] = 'X';
        dest[y+1][x] = 'P';
        dest[y][x] = ' ';
    }
    else if ((dest[y+2][x] == ' ' && dest[y+1][x] == 'X')) {
        dest[y+1][x] = 'P';
        dest[y+2][x] = 'X';
        dest[y][x] = ' ';
    } else {
        dest[y+1][x] = 'P';
        dest[y][x] = ' ';
    }
    return dest;
}
