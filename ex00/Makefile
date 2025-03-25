# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/25 18:26:41 by jpancorb          #+#    #+#              #
#    Updated: 2025/03/25 20:16:30 by jpancorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= braiiiiiiinnnzzzz
SRCS	= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HEADER	= Zombie.hpp
CFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		c++ $(CFLAGS) -o $@ $^

%.o: %.cpp $(HEADER)
		c++ $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re