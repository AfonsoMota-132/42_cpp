# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 15:20:40 by afogonca          #+#    #+#              #
#    Updated: 2024/12/20 15:25:56 by afogonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $($SRCS:.cpp=.o)

SRCS = main.cpp Phonebook.cpp Contact.cpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
