/*
** EPITECH PROJECT, 2019
** popup
** File description:
** popup
*/

#include "./../includes/my.h"

char *c_buffer(char *text)
{
    struct stat file;
    stat(text, &file);
    int openfile = open(text, O_RDONLY);
    int size = file.st_size;
    char *buffer = malloc(sizeof(char) * size + 1);

    read(openfile, buffer, size);
    close(openfile);
    return buffer;
}

char **char2d(char *buffer)
{

    int colone = col(buffer);
    int lines = line(buffer);
    char **dest = createto2char(lines, colone);
    int x = 0;
    int y = 0;
    int a = 0;

    for (int b = 0; buffer[a] != '\0'; b++) {
        for (int c = 0; buffer[a] != '\n'; c++, a++) {
            dest[b][c] = buffer[a];
            if (dest[b][c] == 'P') {
                x = c;
                y = b;
            }
        }
        a++;
    }
    return (dest);
}

int sokoban(char *file)
{
    char *buffer = c_buffer(file);
    int lines = line(buffer);
    int colone = col(buffer);
    char **dest = char2d(buffer);
    char **copy = char2d(buffer);
    int verifmap = verif_map(buffer, lines, colone);
    int ch;
    int x = findx(dest, buffer);
    int y = findy(dest, buffer);
    int verifi = verif_map(buffer, lines, colone);
    int terminal;

    if (verifi == 84)
        return 84;
    terminal = screen( buffer, copy, dest, file);
}

int main(int ac, char **av)
{
    if (ac == 1 || ac > 2)
        return 84;
    if (av[1][0] == '-' && av[1][1] == 'h')
        usage();
    else if (verif_file(av[1]) == 84)
        return 84;
    else {
        return sokoban(av[1]);
    }
}
