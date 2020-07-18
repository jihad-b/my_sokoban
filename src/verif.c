/*
** EPITECH PROJECT, 2019
** verif
** File description:
** verif
*/

#include "./../includes/my.h"

int verif(char **dest, int lines, int colone, char **copy)
{
    int a = 0;
    int o = 0;

    for (int b = 0; b < lines; b++) {
        for (int c = 0; c < colone - 1; c++) {
            if (copy[b][c] == 'O')
                o++;
        }
    }
    for (int b = 0; b < lines; b++) {
        for (int c = 0; c < colone - 1; c++) {
            if (copy[b][c] == 'O' && dest[b][c] == 'X')
                o--;
        }
    }
    if (o == 0)
        return 0;
    else
        return 1;
}

int verif_map(char *buffer, int lines , int colone)
{
    int a = 0;

    for (int b = 0; buffer[a] != '\0'; b++) {
        for (int c = 0; buffer[a] != '\n'; c++, a++) {
            if (buffer[a] == ' ' || buffer[a] == '#' || buffer[a] == '\n' )
                a = a;
            else if ( buffer[a] == 'P' || buffer[a] == 'O' || buffer[a] == 'X')
                a = a;
            else
                return 84;
        }
        a++;
    }
}

int verif_file(char *file)
{
    struct stat files;
    stat(file, &files);
    int openfile = open(file, O_RDONLY);

    if (openfile == -1)
        return 84;
}

char **verif_o(char **dest, int lines, int colone, char **copy)
{
    for (int b = 0; b < lines; b++) {
        for (int c = 0; c < colone - 1; c++) {
            if (copy[b][c] == 'O' && dest[b][c] == ' ') {
                dest[b][c] = 'O';
            }
        }
    }
    return dest;
}
