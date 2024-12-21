# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/21 14:42:48 by afogonca          #+#    #+#              #
#    Updated: 2024/12/21 14:44:18 by afogonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

OBJS = $(SRCS:.cpp=.o)

SRCS = srcs/main.cpp srcs/HumanA.cpp \
	   srcs/HumanB.cpp srcs/Weapon.cpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
