NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror -Iinclude

SRC_DIR = srcs
SRC = $(addprefix $(SRC_DIR)/, \
	ft_printf.c \
	ft_handle_type.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_putdecimal.c \
	ft_putaddress.c \
	ft_putunsigned_dec.c \
	ft_puthexalower.c \
	ft_puthexaupper.c \
)

OBJS = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean
