NAME = libft.a
SRCS = ft_isalpha.c ft_memchr.c ft_split.c ft_strlcpy.c ft_strtrim.c ft_atoi.c ft_isascii.c \
	ft_memcmp.c ft_strchr.c ft_strlen.c ft_substr.c main.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_tolower.c ft_isprint.c ft_memmove.c ft_strjoin.c ft_strnstr.c ft_toupper.c ft_isalnum.c \
# 	ft_itoa.c \
	ft_memset.c ft_strlcat.c ft_strrchr.c libft.h
CC = cc
CFLAGS = -Wall -Werror -Wextra
HEADER = libft.h
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	ar -rcs $@ $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re