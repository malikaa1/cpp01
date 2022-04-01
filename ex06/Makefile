# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmani <mrahmani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 17:27:33 by mrahmani          #+#    #+#              #
#    Updated: 2022/04/01 17:27:34 by mrahmani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	=	harlFilter

SRCS	=	main.cpp Harl.cpp

OBJS	=	${SRCS:.cpp=.o}

CC	=	c++

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