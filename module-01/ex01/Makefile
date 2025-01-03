# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/21 09:54:07 by afogonca          #+#    #+#              #
#    Updated: 2024/12/21 09:56:02 by afogonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieHorde
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

OBJS = $(SRCS:.cpp=.o)
SRCS = srcs/main.cpp srcs/Zombie.cpp \
	   srcs/zombieHorde.cpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
