# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 12:09:04 by emmagrevess       #+#    #+#              #
#    Updated: 2023/04/27 12:09:58 by emmagrevess      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

SRCS =	main.cpp \
		Weapon.cpp \
		HumanB.cpp \
		HumanA.cpp \


OBJECT = $(SRCS:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror -g

$(NAME): $(OBJECT)
	$(CC) $(CFLAGS) -o $(NAME) -fsanitize=address $(OBJECT)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all: $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re