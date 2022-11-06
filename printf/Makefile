# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 00:49:41 by mokhalil          #+#    #+#              #
#    Updated: 2022/11/02 00:50:36 by mokhalil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_printf.c ft_prinfcts.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) -I ./ $(CFLAGS) -c $(SRC)
		
clean:
		$(RM) $(OBJ) 

fclean: clean
		$(RM) $(NAME)

re: fclean all