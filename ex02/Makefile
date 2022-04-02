# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmani <mrahmani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 13:50:59 by mrahmani          #+#    #+#              #
#    Updated: 2022/04/02 23:44:21 by mrahmani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brain

SRCS	=	main.cpp

OBJS	=	${SRCS:.cpp=.o}

CC	=	clang++

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CC) -g $(CFLAGS) -c $< -o ${<:.cpp=.o}


all:	${NAME}

${NAME}:	$(OBJS) 
			$(CC) -g $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		${RM} ${OBJS} 

fclean:	
		${RM} ${OBJS} 
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re