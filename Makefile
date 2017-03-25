
NAME = libft.a

CC = gcc

CFLAG = -c -Wall -Werror -Wextra

SRC_NAME = 	ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memalloc.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memdel.c \
			ft_memmove.c\
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_lstmap.c \
			ft_lstiter.c \
			ft_lstadd.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstnew.c \
			ft_isneg.c \
			ft_sign.c \
			ft_nlen.c \
			ft_wordbuilder.c \
			ft_strndup.c \
			get_next_line.c \
			ft_wordcount.c \
			ft_swap.c \
			ft_swaplol.c

OBJ_NAME = $(SRC_NAME:.c=.o)

AR = ar rc

RLIB = ranlib

RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(CFLAG) $(SRC_NAME)
	$(AR) $(NAME) $(OBJ_NAME)
	$(RLIB) $(NAME)

clean:
	$(RM) $(OBJ_NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all
