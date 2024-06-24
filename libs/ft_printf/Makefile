# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: anagutie <anagutie@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/12/04 12:38:44 by anagutie      #+#    #+#                  #
#    Updated: 2023/12/27 13:04:28 by anagutie      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT_DIR = libft
LIBFT_NAME= $(addprefix $(LIBFT_DIR)/, libft.a)
AR= ar rcs
SRC= ft_printf.c			\
		ft_base.c			\
		ft_putstr.c			\
		ft_put_unsigned.c	\
		ft_putchar.c		\
		ft_putnbr.c			\
		ft_put_hex.c
OBJ= $(SRC:.c=.o)
FLAGS= -Wall -Werror -Wextra
CC= cc
RM= rm -rf
all: $(LIBFT_NAME) ${NAME}
${NAME}: $(OBJ)
	$(AR) $(LIBFT_NAME) $(OBJ)
	mv $(LIBFT_NAME) $(NAME)
# $(OBJ): $(SRC)
# 	$(CC) $(FLAGS) -I $(LIBFT_DIR) -c $(SRC)
$(LIBFT_NAME):
	$(MAKE) -C $(LIBFT_DIR)
clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(LIBFT_NAME)
	$(RM) $(NAME) $(OBJ) ./a.out
re: fclean
	$(MAKE)
.PHONY: all re fclean clean