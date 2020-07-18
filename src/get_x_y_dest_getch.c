/*
** EPITECH PROJECT, 2019
** get
** File description:
** get
*/

#include "./../includes/my.h"

int x_getch(int ch, char **dest, int x, int y)
{
    if (ch == 65)
        x = x;
    if (ch == 66)
        x = x;
    if (ch == 67)
        x = get_x_right(dest, x, y);
    if (ch == 68)
        x = get_x_left(dest, x, y);
    return x;
}

int y_getch(int ch, char **dest, int x, int y)
{
    if (ch == 65) {
        y = get_y_up(dest, x, y);
    }
    if (ch == 66) {
        y = get_y_down(dest, x, y);
    }
    if (ch == 67) {
        x = x;
    }
    if (ch == 68) {
        x = x;
    }
    return y;
}

void print_t(char **dest, int lines)
{
    for (int b = 0; b != lines; b++) {
        printw(dest[b]);
        printw("\n");
    }
}

char **dest_getch(int ch, char **dest, int x, int y)
{
    if (ch == 65) {
        dest = get_dest_up(dest, x, y);
        y = get_y_up(dest, x, y);
    }
    if (ch == 66) {
        dest = get_dest_down(dest, x, y);
        y = get_y_down(dest, x, y);
    }
    if (ch == 67) {
        dest = get_dest_right(dest, x, y);
        x = get_x_right(dest, x, y);
    }
    if (ch == 68) {
        dest = get_dest_left(dest, x, y);
    }
    return dest;
}
