SRCS			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
					ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strlcat.c\
					ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
					ft_strncmp.c ft_strnstr.c ft_atoi.c ft_memset.c ft_bzero.c\
					ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c\
					ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
					ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
					ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c\
					ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
					ft_lstiter.c ft_lstmap.c ft_printf.c ft_hex.c ft_ptr.c \
					ft_putchar.c ft_putdec.c ft_putdec_u.c ft_putstr.c
OBJS = $(SRCS:.c=.o)

NAME = libft.a

NAME_BONUS = bonus

CFLAGS = -Wall -Wextra -Werror

CC = cc
RM = rm -f


all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(NAME_BONUS): $(OBJS)
	ar rcs $(NAME_BONUS) $(OBJS)

main: main.c $(OBJS) libft.h
	$(CC) $(CFLAGS) -o main main.c $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean $(NAME)

.PHONY: all clean fclean re
