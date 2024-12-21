# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/21 09:21:40 by afogonca          #+#    #+#              #
#    Updated: 2024/12/21 09:22:46 by afogonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brainzz
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

OBJS = $(SRCS:.cpp=.o)

SRCS = srcs/main.cpp srcs/newZombie.cpp srcs/Zombie.cpp \
	   srcs/randomChump.cpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
