# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 20:34:28 by afogonca          #+#    #+#              #
#    Updated: 2024/11/24 20:39:10 by afogonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AForm
CXX = c++
RM = rm -f
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -I"./incs"

SRCS :=	srcs/main.cpp srcs/Bureaucrat.cpp srcs/AForm.cpp \
		srcs/PresidentialPardonForm.cpp \
		srcs/RobotomyRequestForm.cpp \
		srcs/ShrubberyCreationForm.cpp

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
