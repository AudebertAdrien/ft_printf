NAME		= a.out

CC			= gcc
CFLAGS		= -Wall -Wextra
DLEAK		= -fsanitize=address
DEPS		= libft.h

SRC		= main.c \
		  ft_printf.c \
		  ft_strlen.c \
		  ft_printchar.c \
		  ft_printstr.c \
		  ft_printnbr_int.c \
		  ft_printnbr_base.c \
		  ft_printnbr_ptr.c \

all: $(NAME)

$(NAME): 
	$(CC) -g $(CFLAGS) -I.$(DEPS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
