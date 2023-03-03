NAME		= a.out

CC			= gcc
CFLAGS		= -Wall -Wextra
DLEAK		= -fsanitize=address
DEPS		= libft.h

SRC		= main.c \
		  ft_printf.c \
		  ft_strlen.c \
		  ft_putchar_i.c \
		  ft_putnbr_int.c \
		  ft_putnbr_base_unsigned.c \

all: $(NAME)

$(NAME): 
	$(CC) -g $(CFLAGS) -I.$(DEPS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
