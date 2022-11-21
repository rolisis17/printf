SRCS = ft_printf.c ft_count.c ft_flags.c ft_putchar.c ft_putstr.c ft_putnbr.c \
ft_putunsigned.c ft_puthexa.c ft_putaddress.c
CFLAGS = -Wall -Wextra -Werror
CC = cc
NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)
RM = rm -f
LIBC = ar rcs
INCS = ft_printf.h

.c.o: $(INCS)
	$(CC) $(CFLAGS) -c $(<) -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all