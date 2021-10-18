NAME=		libft.a
BIN=		test

CC=			gcc
CFLAGS=		-g\
			-Wall\
			-Werror\
			-Wextra\
			-O0

SRC_DIR=	src
OBJ_DIR=	obj

SRCS=		$(shell find $(SRC_DIR) -type f -name "*.c")
OBJS=		$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o, $(SRCS))

all: $(OBJS) bin

$(NAME): $(OBJS) main bin

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

bin:
	$(CC) $(CFLAGS) $(OBJS) -o $(BIN)

clean:
	rm -rf $(OBJ_DIR)/*.o

fclean: clean
	rm -rf $(BIN)

re: fclean all

.PHONY: all bin clean fclean re