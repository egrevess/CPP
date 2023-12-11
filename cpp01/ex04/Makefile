# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 11:23:51 by emmagrevess       #+#    #+#              #
#    Updated: 2023/11/27 11:38:38 by emmagrevess      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Replace 

SRCS	= main.cpp

OBJDIR	= objs

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS	= $(addprefix ${OBJDIR}/, $(addsuffix .o, $(basename ${SRCS})))

${OBJDIR}/%.o: %.cpp
			@mkdir -p ${OBJDIR}
			${CC} ${CFLAGS} -c -o $@ $<

${NAME}:	${OBJS}
			${CC} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			rm -rf ${OBJDIR}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re NAME