/*
** EPITECH PROJECT, 2019
** d
** File description:
** d
*/

#include "./../includes/my.h"

int screen(char *buffer, char **copy, char **dest, char *file)
{
    int x = findx(dest, buffer);
    int y = findy(dest, buffer);
    int ch;

    initscr();
    curs_set(0);
    while (true) {
        clear();
        refresh();
        print_t(dest, line(buffer));
        ch = getch();
        if (ch == ' ')
            sokoban(file);
        dest = dest_getch(ch, dest, x, y);
        x = x_getch(ch, dest, x, y);
        y = y_getch(ch, dest, x, y);
        dest = verif_o(dest, line(buffer), col(buffer), copy);
        if (condition_v_l(dest, line(buffer), col(buffer), copy) != 84)
            return condition_v_l(dest, line(buffer), col(buffer), copy);
    }
}
