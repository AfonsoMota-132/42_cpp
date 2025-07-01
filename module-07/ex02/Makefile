# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/03 10:24:34 by afogonca          #+#    #+#              #
#    Updated: 2025/07/01 15:08:24 by afogonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -f

SRCS = srcs/main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
