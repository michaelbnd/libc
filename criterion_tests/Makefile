##
## LIBC PROJECT, 2018
## Unit tests
## File description :
## Makefile used for compiling tests
##

NAME	=	criterion_tests
CFLAGS	=	-W -Wall -Wextra -pedantic --coverage
LDFLAGS	=	--coverage
LIBFLAGS=	-lcriterion
SRC	=	$(wildcard conversion/*.c)
SRC	+=	$(wildcard ../conversion/*.c)
SRC	+=	$(wildcard string/*.c)
SRC	+=	$(wildcard ../string/*.c)
SRC	+=	$(wildcard math/*.c)
SRC	+=	$(wildcard ../math/*.c)
OBJ	=	$(SRC:.c=.o)
COV	=	$(SRC:.c=.gcda)
COV	+=	$(SRC:.c=.gcno)
INCLUDE =	-I ../include

CC	=	gcc
RM	=	rm -f

all:	$(NAME)

%.o:	%.c
	$(CC) $(INCLUDE) $(CFLAGS) -c $^ -o $@

$(NAME):	$(OBJ)
	$(CC) $(LDFLAGS) $(LIBFLAGS) $^ -o $@

clean:
	$(RM) $(OBJ)
	$(RM) $(COV)
	$(RM) coverage.info

fclean: clean
	$(RM) $(NAME)
	$(RM) -r out

re: fclean all

coverage:	$(NAME)
	lcov --capture --directory .. --output-file coverage.info
	genhtml coverage.info --output-directory out
	open out/index.html

.PHONY: all clean fclean re
