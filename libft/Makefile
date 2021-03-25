# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amanuel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/27 20:13:45 by amanuel           #+#    #+#              #
#    Updated: 2018/03/14 19:09:40 by amanuel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror -g

SRC =	ft_atoi.c \
		ft_itoa.c \
		ft_bzero.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_isalnum.c \
	 	ft_isalpha.c \
	  	ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_lstadd.c \
		ft_lstdel.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstiter.c \
		ft_lstdelone.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_memdel.c \
		ft_memset.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memalloc.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putchar.c \
		ft_putendl.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_strlen.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strlen.c \
		ft_strnew.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strnew.c \
		ft_strncpy.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strnequ.c \
		ft_strtrim.c \
		ft_strnequ.c \
		ft_strncmp.c \
		ft_strlcat.c \
		ft_strncat.c \
		ft_strjoin.c \
		ft_striter.c \
		ft_strsplit.c \
		ft_striteri.c \
		ft_puttab.c \
		ft_isprime.c \
		ft_factorial.c \
		ft_power.c \
		ft_sqrt.c \
		ft_findc.c \
		ft_strjoin_free.c \
		ft_strndel.c \
		ft_strndup.c \

OBJ = $(SRC:.c=.o)

INC = -I includes

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(INC) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
