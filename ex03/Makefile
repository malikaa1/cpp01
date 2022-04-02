# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmani <mrahmani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 13:50:59 by mrahmani          #+#    #+#              #
#    Updated: 2022/04/02 23:37:00 by mrahmani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	weapon

SRCS	=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

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