# -*- Makefile -*-

FILES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strlen.c ft_toupper.c ft_tolower.c

#FILES_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(FILES:.c=.o)
#OBJS_BONUS = $(FILES_BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
MSG1 = @echo "Compiled ✔︎"
MSG2 = @echo "Cleaned ✔︎"

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS)
		$(MSG1)

#bonus: $(OBJS) $(OBJS_BONUS)
#		@ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS)
#		$(MSG1)

clean: 
		rm -f $(OBJS) $(OBJS_BONUS)
		$(MSG2)
fclean: clean
		rm -f $(NAME)
re: fclean $(NAME)

.PHONY: all, clean, fclean, re, bonus