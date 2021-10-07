NAME = libftprintf.a

CC_FLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/libft.a

SRCS =	ft_printf.c				\
		ft_initiate_function.c	\
		ft_check_all.c			\
		ft_formating.c			\
		ft_check_errors.c		\
		ft_gets_s_c.c			\
		flags_formating.c		


OBJS = $(SRCS:.c=.o)


all:  $(NAME)
	make clean

$(NAME): $(LIBFT) $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	ranlib $(NAME)

$(LIBFT):
	make all -C ./libft
	cp libft/libft.a $(NAME)

$(OBJS):
	gcc -I ./headers $(CC_FLAGS) -c $(addprefix ./files/,$(SRCS))


clean: 
	rm -f $(OBJS) $(LIBFT_OBJS)

fclean: clean 
	rm -f $(NAME)

re: fclean all

teste: re
	make all -C ./libft
	@gcc -I ./headers main.c -L . -lftprintf -L ./libft -lft  && ./a.out -g3

.PHONY: all clean fclean re