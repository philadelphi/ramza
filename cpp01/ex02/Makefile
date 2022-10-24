# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 08:14:53 by phaslan           #+#    #+#              #
#    Updated: 2022/09/07 08:37:42 by phaslan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES		=	main \

SRCS		=	$(addsuffix .cpp, $(FILES))

OBJS		=	$(SRCS:.cpp=.o)
DEPTH		=	$(SRCS:.cpp=.d)

CXX			=	c++
RM			=	rm -f
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -MMD

NAME	=	Brainiac

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