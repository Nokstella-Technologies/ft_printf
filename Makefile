NAME = libftprintf.a

CC_FLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/libft.a

SRCS =	ft_printf.c				\
		ft_initiate_function.c	\
		ft_check_all.c			\
		ft_formating.c			\
		ft_check_errors.c		\
		ft_gets_s_c_p.c			\
		ft_gets_i_d.c			\
		ft_gets_u_x.c			\
		flags_formating.c		\
		flags_formating2.c		\
		flags_pointer.c		


OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) 
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C ./libft


$(OBJS):
	gcc $(CC_FLAGS) -I./headers -c $(addprefix ./files/,$(SRCS))


clean: 
	rm -f $(OBJS) $(LIBFT_OBJS)
	make fclean -C ./libft

fclean: clean 
	rm -f $(NAME)

re: fclean all

bonus: all

test:
	gcc -g3 -I ./headers main.c $(addprefix ./files/,$(SRCS)) -L ./libft -lft 


.PHONY: all clean fclean re bonus test