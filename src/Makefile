NAME=		libft.a
BIN=		test

CC=			gcc
CFLAGS=		\
			-Wall\
			-Werror\
			-Wextra\

SRC_DIR=	.
OBJ_DIR=	.

SRCS=\
			ft_atoi\
			ft_bzero\
			ft_calloc\
			ft_isalnum\
			ft_isalpha\
			ft_isascii\
			ft_isdigit\
			ft_isprint\
			ft_itoa\
			ft_memchr\
			ft_memcmp\
			ft_memcpy\
			ft_memmove\
			ft_memset\
			ft_putchar_fd\
			ft_putendl_fd\
			ft_putnbr_fd\
			ft_putstr_fd\
			ft_split\
			ft_strchr\
			ft_strdup\
			ft_striteri\
			ft_strjoin\
			ft_strlcat\
			ft_strlcpy\
			ft_strlen\
			ft_strmapi\
			ft_strncmp\
			ft_strnstr\
			ft_strrchr\
			ft_strtrim\
			ft_substr\
			ft_tolower\
			ft_toupper

OBJS=		$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

all: $(OBJS) $(NAME) clean

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_DIR)/*.o

fclean: clean
	rm -f $(BIN) $(NAME)

re: fclean all

.PHONY: all clean fclean re