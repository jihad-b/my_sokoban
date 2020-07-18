/*
** EPITECH PROJECT, 2019
** verifx
** File description:
** verifx
*/

#include "./../includes/my.h"

int verif_x(char **dest, int lines, int colone, char **copy)
{
    int a = verif_nb_x(dest, lines, colone);

    for (int b = 0; b < lines; b++) {
        for (int c = 0; c < colone - 1; c++) {
            if (dest[b][c] == 'X' && dest[b][c-1] == '#')
                if (dest[b-1][c] == '#' && copy[b][c] != 'O')
                    a--;
            if (dest[b][c] == 'X' && dest[b][c+1] == '#')
                if (dest[b+1][c] == '#' && copy[b][c] != 'O')
                    a--;
            if (dest[b][c] == 'X' && dest[b][c+1] == '#')
                if (dest[b-1][c] == '#' && copy[b][c] != 'O')
                    a--;
            if (dest[b][c] == 'X' && dest[b][c-1] == '#')
                if (dest[b+1][c] == '#' && copy[b][c] != 'O')
                    a--;
        }
    }
    return a;
}

int verif_nb_x(char **dest, int lines, int colone)
{
    int a = 0;

    for (int b = 0; b < lines; b++)
        for (int c = 0; c < colone - 1; c++)
            if (dest[b][c] == 'X')
                a++;
    return a;
}

int verif_lose(int verif)
{
    if (verif == 0)
        return 0;
    else
        return 1;
}

int condition_v_l(char **dest, int lines, int colone, char **copy)
{
    if (verif(dest, lines, colone, copy) == 0) {
        clear();
        print_t(dest, lines);
        refresh();
        endwin();
        return 0;
    }
    if (verif_lose(verif_x(dest, lines, colone, copy)) == 0){
        clear();
        print_t(dest, lines);
        refresh();
        endwin();
        return 1;
    }
    else
        return 84;
}
