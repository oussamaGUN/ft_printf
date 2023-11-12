SRC		=	ft_all_base.c ft_big.c ft_int_char.c ft_printf.c ft_printf_base.c ft_printf_pointer.c ft_printf_tools.c

OBJC	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

RM		=	rm -rf

AR		=	ar -rc

all:	$(NAME)

$(NAME):	$(OBJC)
	$(AR) $(NAME) $(OBJC)

clean:
	$(RM) $(OBJC)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all