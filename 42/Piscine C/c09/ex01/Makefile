# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heouahes <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 20:49:01 by heouahes          #+#    #+#              #
#    Updated: 2020/08/24 21:08:48 by heouahes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_SRCS = ./srcs/

SRCS = ./srcs/ft_putchar.c\
		./srcs/ft_swap.c\
		./srcs/ft_putstr.c\
		./srcs/ft_strlen.c\
		./srcs/ft_strcmp.c\

OBJS = $(SRCS:.c=.o)

INCLUDES = ./includes/

CGFLAGS = -Wall -Wextra -Werror

all : $(NAME)

.c.o:
	gcc-c $(CFLAGS) -l $
(INCLUDES) $< -o$(<:.c=.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
