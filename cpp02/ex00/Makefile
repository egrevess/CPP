NAME = Fixed

SRCS =	main.cpp \
		Fixed.cpp

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