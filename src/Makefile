# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 11:34:36 by rafernan          #+#    #+#              #
#    Updated: 2021/11/01 23:01:46 by rafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=		libft.a
RM=			rm -f

CC=			gcc
CFLAGS=		\
			-Wall\
			-Werror\
			-Wextra\

CVARS=

SRCS=		$(shell find . -maxdepth 1 -name "*.c")

OBJS=		$(patsubst %.c,%.o,$(SRCS))
OBJSB=		$(patsubst %.c,%.o,$(SRCSB))

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(CVARS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $@ $^
	ranlib $@

bonus: $(OBJSB)
	ar rcs $(NAME) $^
	ranlib $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re