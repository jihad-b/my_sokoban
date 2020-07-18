/*
** EPITECH PROJECT, 2019
** findx y
** File description:
** findx y
*/

#include "./../includes/my.h"

int findx(char **dest, char *buffer)
{
    int a = 0;
    int x = 0;

    for (int b = 0; buffer[a] != '\0';a++, b++)
        for (int c = 0; buffer[a] != '\n'; a++, c++)
            if (dest[b][c] == 'P')
                x = c;
    return x;
}

int findy(char **dest, char *buffer)
{
    int a = 0;
    int	y = 0;

    for (int b = 0; buffer[a] != '\0';a++, b++)
        for (int c = 0; buffer[a] != '\n'; a++, c++)
            if (dest[b][c] == 'P')
                y = b;
    return y;
}
