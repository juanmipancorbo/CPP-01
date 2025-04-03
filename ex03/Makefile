# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 21:22:59 by jpancorb          #+#    #+#              #
#    Updated: 2025/04/03 18:17:49 by jpancorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= unnecessary_violence
SRCS	= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
DEPS	= Weapon.hpp HumanA.hpp HumanB.hpp
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -MMD -MP -fsanitize=leak

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		c++ $(CFLAGS) -o $@ $^

%.o: %.cpp
		c++ $(CFLAGS) -c $< -o $@

-include $(OBJS:.o=.d)

clean:
		rm -f $(OBJS) $(OBJS:.o=.d)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re