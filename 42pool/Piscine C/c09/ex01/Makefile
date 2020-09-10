# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heouahes <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/25 12:48:12 by heouahes          #+#    #+#              #
#    Updated: 2020/08/25 13:27:03 by heouahes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_SRCS = ./srcs/

SRCS	=	./srcs/ft_putchar.c\
	    	./srcs/ft_swap.c\
		   	./srcs/ft_putstr.c\
		  	./srcs/ft_strlen.c\
		 	./srcs/ft_strcmp.c\

OBJS	=	$(SRCS:.c=.o)

INCLUDES =	./includes/

CGLAGS =	-Wall -Wextra -Werror

all : $(NAME)

.c.o :
	gcc -c $(CFLAGS) -I $(INCLUDES) $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
