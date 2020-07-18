/*
** EPITECH PROJECT, 2019
** tab
** File description:
** tab
*/

#include "./../includes/my.h"

char **createto2char(int line, int col)
{
    char **dest = malloc(sizeof(char *) * (line+ 1));
    char *temp;
    int a = 0;

    for (; a != line; a++) {
        temp = malloc(sizeof(char) * (col + 1));
        dest[a] = temp;
    }
    dest[a] = NULL;
    return (dest);
}
