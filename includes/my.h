/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** task02
*/

#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ncurses.h>
#include <curses.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#define baseX "0123456789ABCDEF"
#define basex "0123456789abcdef"

int verif_x(char **dest, int lines, int colone, char **copy);
char **left(char **dest, int x , int y);
int verif_nb_x(char **dest, int lines, int colone);
int verif_x(char **dest, int lines, int colone, char **copy);
char **right(char **dest, int x , int y);
int verif_lose(int verif);
char **verif_o(char **dest, int lines, int colone, char **copy);
char **up(char **dest, int x, int y);
char **down(char **dest, int x, int y);
char **get_dest_up(char **dest, int x, int y);
char **get_dest_down(char **dest, int x, int y);
int x_getch(int ch, char **dest, int x, int y);
int y_getch(int ch, char **dest, int x, int y);
void print_t(char **dest, int lines);
char **dest_getch(int ch, char **dest, int x, int y);
int findx(char **dest, char *buffer);
char **get_dest_left(char **dest, int x, int y);
char **get_dest_right(char **dest, int x, int y);
int get_y_up(char **dest, int x, int y);
int get_y_down(char **dest, int x, int y);
int get_x_right(char **dest, int x, int y);
int get_x_left(char **dest, int x, int y);
int findy(char **dest, char *buffer);
void my_putchar(char c);
int tohexa(unsigned int number, char *base);
int print_s(char *str);
char **createto2char(int line, int col);
void usage(void);
int verif_file(char *file);
int verif(char **dest, int lines, int colone, char **copy);
int condition_v_l(char **dest, int lines, int colone, char **copy);
int screen(char *buffer, char **copy, char **dest, char *file);
char *buffer(char *text);
int verif_map(char *buffer, int lines , int colone);
int sokoban(char *file);
char **char2d(char *buffer);
int col(char *buffer);
int line(char *buffer);
int toctal(unsigned int number);
int tobinary(unsigned int number);
int tohexa(unsigned int number, char *base);
int printh(va_list params, char const *str, int a);
int print_o_b(va_list params, char const *str, int a);
int print_s_s(va_list params, char const *str, int a);
int print_d_mod(va_list params, char const *str, int a);
int nb_col(char *buffer);
int my_isneg(int nb);
int **createdbint(char * buffer, int **map, int a);
int nbrr(int nb);
int word(int n);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char *str);
int my_strlen(char const *str);
int my_printf(char const *str, ...);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int nbr_to_chiff(int nb);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char * dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat (char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_memset(char *buffer, char chara, int size);
int nbrr(int nb);
int word(int n);
