NAME = btc

SRCS =	main.cpp \
		BitcoinExchange.cpp

OBJDIR		= objs

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

OBJS		= $(addprefix ${OBJDIR}/, $(addsuffix .o, $(basename ${SRCS})))

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
