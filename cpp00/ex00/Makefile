NAME					=		megaphone

SRCS					=		megaphone.cpp \

OBJS 		= ${SRCS:.c=.o}

CC 			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

all: 		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): 	$(OBJS)
			${CC} $(CFLAGS) -o $(NAME) $(OBJS) $(FLAGS)

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all