# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 09:21:36 by afogonca          #+#    #+#              #
#    Updated: 2025/04/11 13:13:07 by afogonca         ###   ########.pt        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = srcs/main.cpp srcs/ClapTrap.cpp srcs/ScavTrap.cpp srcs/FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

