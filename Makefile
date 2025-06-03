CFILES: ft_atoi.c ft_bzero.c ft_isalnum.c
OFILES = $(CFILES:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME =	libft.a

all: $(NAME) clean

$(NAME):	$(OFILES)
	ar rcs $(NAME)	$(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re