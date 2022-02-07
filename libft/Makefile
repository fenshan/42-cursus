FUNC_NAMES	= _func.txt
SRCS		= $(shell cat ${FUNC_NAMES} | grep "^[^/]")
OBJS		= ${SRCS:.c=.o}

BONUS_NAMES	= _bonus.txt
SRCS_BONUS	= $(shell cat ${BONUS_NAMES} | grep "^[^/]")
OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

NAME		= libft.a

CC			= cc

AR			= ar rcs

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

# TODO
# dont relink libft.a when it doesnt have bonus
# relink if it has them
${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			@echo "libft.a finished!"

all:		${NAME}

# TODO
# dont relink libft.a when it has bonus
# relink if it doesnt have them
bonus:		${OBJS} ${OBJS_BONUS}
			${AR} ${NAME} ${OBJS} ${OBJS_BONUS}
			@echo "libft.a bonus finished!"

clean:
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all bonus clean fclean re
