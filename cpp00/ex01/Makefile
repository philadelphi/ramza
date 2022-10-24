# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 14:00:11 by phaslan           #+#    #+#              #
#    Updated: 2022/09/07 07:33:23 by phaslan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES		=	Phonebook \
				Contact	\
				main \

SRCS		=	$(addsuffix .cpp, $(FILES))

OBJS		=	$(SRCS:.cpp=.o)
DEPTH		=	$(SRCS:.cpp=.d)

CXX			=	c++
RM			=	rm -f
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -MMD

NAME	=	MyAwesomePhoneBook

all:	$(NAME)

$(NAME):	Makefile $(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
-include $(DEPTH)

clean:
				$(RM) $(OBJS) $(DEPTH)

fclean:				clean
				$(RM) $(NAME) 

re:					fclean $(NAME)

PHONY:			all clean fclean re test