# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/06 10:33:34 by ehedeman          #+#    #+#              #
#    Updated: 2024/09/09 13:41:10 by ehedeman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

OBJS_DIR = objs/
OBJS = $(SRC:.cpp=.o)
OBJS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
#HEADERS = main.hpp
CC = g++
RM = rm -rf
MKDIR = mkdir -p
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = main

all: $(NAME)

$(NAME): $(OBJS_PREFIXED)
	$(CC) $(CPPFLAGS) $(OBJS_PREFIXED) -o $(NAME)

$(OBJS_DIR)%.o : %.cpp #$(HEADERS)
	$(MKDIR) $(OBJS_DIR)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR) testfile.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

leaks: 
	valgrind --leak-check=full	\
         --show-leak-kinds=all ./$(NAME) testfile a blah

.PHONY: all clean re fclean leaks