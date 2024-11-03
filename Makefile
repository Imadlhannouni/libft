NAME = libft.a

SRCS = ft_isdigit.c ft_putendl_fd.c ft_strlcpy.c ft_toupper.c \
       ft_isprint.c ft_putnbr_fd.c ft_strlen.c ft_itoa.c \
       ft_putstr_fd.c ft_strmapi.c ft_atoi.c ft_memchr.c \
       ft_split.c ft_strncmp.c ft_bzero.c ft_memcmp.c \
       ft_strchr.c ft_strnstr.c ft_calloc.c ft_memcpy.c \
       ft_strdup.c ft_strrchr.c ft_isalnum.c ft_memmove.c \
       ft_striteri.c ft_strtrim.c ft_isalpha.c ft_memset.c \
       ft_strjoin.c ft_substr.c ft_isascii.c ft_putchar_fd.c \
       ft_strlcat.c ft_tolower.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c \
        ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c \
        ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

MAIN = main

M_OBJS = $(SRCS:.c=.o)
B_OBJS = $(BONUS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(M_OBJS) $(B_OBJS)
	ar rcs $(NAME) $(M_OBJS) $(B_OBJS)

bonus: $(B_OBJS)
	ar rcs $(NAME) $(B_OBJS)

test: $(MAIN).o $(NAME)
	$(CC) $(CFLAGS) -o $(MAIN) $(MAIN).o $(NAME)
	./$(MAIN)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(M_OBJS) $(B_OBJS) $(MAIN).o

fclean: clean
	rm -f $(NAME) $(MAIN)

re: fclean all test

.PHONY: all clean fclean re bonus norm