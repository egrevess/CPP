# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 09:53:46 by emmagrevess       #+#    #+#              #
#    Updated: 2023/04/27 09:54:42 by emmagrevess      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRCS = newZombie.cpp \
		Zombie.cpp \
		randomChump.cpp \
		main.cpp \

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