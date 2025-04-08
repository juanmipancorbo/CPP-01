# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 00:06:06 by jpancorb          #+#    #+#              #
#    Updated: 2025/04/09 00:07:45 by jpancorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Harl_2_0
SRCS	= main.cpp Harl.cpp
DEP		= Harl.hpp
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