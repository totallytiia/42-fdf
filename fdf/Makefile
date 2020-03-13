# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlaukkan <tlaukkan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/04 15:07:08 by tlaukkan          #+#    #+#              #
#    Updated: 2020/03/04 16:43:31 by tlaukkan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SOURCES = main.c

OBJ = $(subst .c,.o,$(SOURCES))

FLAGS = -Wall -Wextra -Werror

LINKS = -I libft -L libft \
	-I /usr/local/include -L /usr/local/lib \
	-l mlx -l ft -framework OpenGL -framework Appkit

$(NAME): $(OBJECTS)
	gcc $(SOURCES) -o $(NAME)  $(LINKS)