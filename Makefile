# -*- Makefile -*-

FILES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_strlcpy.c\
		ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strlen.c \
		ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

OBJS = $(FILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
MSG1 = @echo "Compiled ✔︎"
MSG2 = @echo "Cleaned ✔︎"

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS)
		$(MSG1)

clean: 
		rm -f $(OBJS) $(OBJS_BONUS)
		$(MSG2)
fclean: clean
		rm -f $(NAME)
re: fclean $(NAME)

.PHONY: all, clean, fclean, re, bonus
