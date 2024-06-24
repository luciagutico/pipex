NAME = pipex
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRCS = src/pipex.c src/utils.c
OBJS = $(SRCS:.c=.o)
LIBFT = libs/libft/libft.a
FT_PRINTF = libs/ft_printf/libftprintf.a
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(FT_PRINTF)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C libs/libft

$(FT_PRINTF):
	make -C libs/ft_printf

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	make -C libs/libft fclean
	make -C libs/ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
