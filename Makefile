# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souchane <souchane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 22:20:15 by souchane          #+#    #+#              #
#    Updated: 2023/11/22 20:09:31 by souchane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
F			= -Wall -Wextra -Werror
CC			= cc
RM			= rm -f
HEADER		= libft.h
AR			= ar rc

FILES_BONUS	= ft_lstmap.c ft_lstlast.c ft_lstiter.c \
				 ft_lstsize.c ft_lstclear.c ft_lstdelone.c \
				 ft_lstadd_back.c ft_lstnew.c ft_lstadd_front.c

FILES		= ft_isdigit.c  ft_isprint.c ft_atoi.c ft_strncmp.c ft_tolower.c  ft_strlen.c ft_strlcat.c \
		         ft_toupper.c ft_isalnum.c   ft_strlcpy.c ft_isalpha.c ft_isascii.c  ft_isascii.c \
		         ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_memset.c ft_bzero.c ft_putstr_fd.c\
		         ft_putendl_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
		         ft_strjoin.c ft_memmove.c ft_substr.c ft_strdup.c ft_calloc.c ft_strjoin.c \
		         ft_strtrim.c ft_itoa.c ft_striteri.c ft_strmapi.c ft_split.c		

OFILES		= $(FILES:.c=.o)
OFILES_BS	= $(FILES_BONUS:.c=.o)

%.o: %.c $(HEADER)
	$(CC) $(F) -c $<

all : $(NAME) 

$(NAME): $(OFILES)
	@ $(AR) $(NAME) $(OFILES)
	@ echo "Creation of libft.a"

bonus : $(OFILES_BS)
	@ $(AR) $(NAME) $(OFILES_BS)
	@ echo "Creation of libft.a"

clean :
	@ $(RM) $(OFILES) $(OFILES_BS)
	@ echo "remove objs files"

fclean : clean
	@$(RM) $(NAME)
	@ echo "remove libft.a"

re : fclean all 

.PHONY : bonus clean fclean re all