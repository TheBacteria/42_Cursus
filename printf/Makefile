SRC = ft_printf.c mz_printer.c mz_c_printer.c mz_cap_hex_printer.c mz_int_counter.c mz_p_printer.c\
		mz_printer.c mz_putnbr.c mz_s_printer.c mz_u_putnbr.c mz_x_printer.c mz_checker.c

OBJS = ${SRC:.c=.o}
LIBC = ar rcs
FLAGS = -Wall -Wextra -Werror
CC = cc
INC = ft_printf.h
RM = rm -f
NAME = libftprintf.a


%.o : %.c $(INC)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(LIBC) $(NAME) $(OBJS) $(INC)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re