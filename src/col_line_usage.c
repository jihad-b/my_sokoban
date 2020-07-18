/*
** EPITECH PROJECT, 2019
** colline
** File description:
** coline
*/

#include "./../includes/my.h"

int line(char *buffer)
{
    int nb = 0;
    for (int i = 0; buffer[i] != '\0'; i = i + 1)
        if (buffer[i] == '\n')
            nb++;
    return nb;
}

int col(char *buffer)
{
    int a = 0;
    int c = 0;
    int temp = 0;

    for (; buffer[a] != '\0'; a++) {
        for (;buffer[a] != '\n';a++)
            temp++;
        if (temp >= c)
            c = temp;
        temp = 0; }
    return c;
}

void usage(void)
{
    my_printf("USAGE\n     ./my_sokoban map\n");
    my_printf("DESCRIPTION\n     map file representing the warehouse map,");
    my_printf(" containing '#' for walls,\n");
    my_printf("         'P' for the player, 'X' for boxes and 'O'");
    my_printf(" for storage locations.\n");
}
