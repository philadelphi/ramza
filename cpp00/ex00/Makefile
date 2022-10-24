# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 14:00:11 by phaslan           #+#    #+#              #
#    Updated: 2022/09/06 21:22:19 by phaslan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $? -o $(NAME)

$(OBJS):$(SRCS)
	$(CXX) $(CXXFLAGS) -c $?

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all