NAME		= a.out

CC		= gcc
CFLAGS		= -Wall -Wextra
DLEAK		= -fsanitize=address

SRC		= main.c

all: $(NAME)

$(NAME): 
	$(CC) -g $(CFLAGS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
