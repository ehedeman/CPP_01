# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/04 14:36:53 by ehedeman          #+#    #+#              #
#    Updated: 2024/09/04 14:42:44 by ehedeman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

OBJS_DIR = objs/
OBJS = $(SRC:.cpp=.o)
OBJS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
#HEADERS = Zombie.hpp
CC = g++
RM = rm -rf
MKDIR = mkdir -p
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = main

all: $(NAME)

$(NAME): $(OBJS_PREFIXED)
	$(CC) $(CCPFLAGS) $(OBJS_PREFIXED) -o $(NAME)

$(OBJS_DIR)%.o : %.cpp #$(HEADERS)
	$(MKDIR) $(OBJS_DIR)
	$(CC) $(CCPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean