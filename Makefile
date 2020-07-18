##
## EPITECH PROJECT, 2019
## mf
## File description:
## mf
##

SRC 	=	./src/my_pop_up.c \
		./src/col_line_usage.c \
		./src/tab.c \
		./src/verif.c \
		./src/touch.c \
		./src/findx_y.c \
		./src/print_terminal.c \
		./src/coor_p.c \
		./src/get_x_y_dest_getch.c \
		./src/verif_x.c \
		./src/terminal.c

OBJ 	= 	$(SRC:.c=.o)

NAME	=	my_sokoban

all: 	$(NAME)

$(NAME):	$(OBJ)
	cd lib/my/ ; $(MAKE) -f Makefile all
	gcc -o $(NAME) $(SRC) -lncurses  -L ./lib/my/ -lmy

clean:
	rm -f *~
	rm -f vg*
	rm -f ./src/*.o

fclean: clean
	rm -f $(NAME)
	rm -f libmy.a
	cd lib/my && make fclean

re:	fclean all
