# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souchane <souchane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 14:43:37 by souchane          #+#    #+#              #
#    Updated: 2023/11/09 21:57:34 by souchane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror

ARC = ar rc

LIBRARY = libft.h

SRC = ft_isdigit.c  ft_isprint.c ft_atoi.c ft_strncmp.c ft_tolower.c  ft_strlen.c ft_strlcat.c \
		ft_toupper.c ft_isalnum.c   ft_strlcpy.c ft_isalpha.c ft_isascii.c  ft_isascii.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_memset.c ft_bzero.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
		ft_strjoin.c ft_memmove.c ft_substr.c ft_strdup.c ft_calloc.c ft_strjoin.c \
		ft_strtrim.c ft_itoa.c ft_striteri.c ft_strmapi.c ft_split.c

OBJS = $(SRC:.c=.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(ARC) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

%.o : %.c	$(LIBRARY)
	$(CC) $(CFLAGS) -o $@ -c $<
	

fclean: clean
	rm -f $(NAME)

re : fclean all bonus