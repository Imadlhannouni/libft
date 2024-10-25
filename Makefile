NAME = libft.a

SRCS = $(wildcard *.c)

MAIN = main

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

test: $(MAIN).o $(NAME)
	$(CC) $(FLAGS) -o $(MAIN) $(MAIN).o $(NAME)
	./$(MAIN)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

<<<<<<< HEAD
re: fclean all
=======
re: fclean all test
>>>>>>> 572285e (new)

.PHONY: all clean fclean re
