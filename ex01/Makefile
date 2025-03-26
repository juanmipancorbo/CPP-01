# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/26 19:27:49 by jpancorb          #+#    #+#              #
#    Updated: 2025/03/26 19:29:10 by jpancorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= moar_brainz
SRCS	= main.cpp Zombie.cpp zombieHorde.cpp
DEP		= Zombie.hpp
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=leak

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		c++ $(CFLAGS) -o $@ $^

%.o: %.cpp $(DEP)
		c++ $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re