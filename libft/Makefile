FUNC_NAMES	= _func.c
SRCS		= $(shell cat ${FUNC_NAMES} | grep "^[^/]")
OBJS		= ${SRCS:.c=.o}

BONUS_NAMES	= _bonus.c
SRCS_BONUS	= $(shell cat ${BONUS_NAMES} | grep "^[^/]")
OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

NAME		= libft.a

CC		= cc

AR		= ar rcs

RM		= rm -f

CFLAGS		= -Wall -Wextra -Werror

# COLORS
BLACK		= \033[0;30m
RED		= \033[0;31m
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
MAGENTA		= \033[0;35m
CYAN		= \033[0;36m
RESET		= \033[0m

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}
ifeq "" "$(findstring ${OBJS_BONUS},${OBJS})"
		@echo "${GREEN}$@ finished!${RESET}"
else
		@echo "${GREEN}$@ bonus finished!${RESET}"
endif

all:		${NAME}

bonus:
		@make OBJS="${OBJS} ${OBJS_BONUS}" all

clean:
		${RM} ${OBJS} ${OBJS_BONUS}
		@echo "${YELLOW}objects cleaned${RESET}"

fclean:		clean
		${RM} ${NAME}
		@echo "${YELLOW}all binaries cleaned${RESET}"

re:		fclean all

.PHONY:		all bonus clean fclean re
