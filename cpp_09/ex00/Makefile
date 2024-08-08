# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/08 15:18:51 by Monsieur_Ca       #+#    #+#              #
#    Updated: 2024/08/08 15:24:59 by Monsieur_Ca      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

# SRC_DIR = .
OBJ_DIR = obj/
# INC_DIR = .

SRC	=	BitcoinExchange.cpp \
		main.cpp

OBJ = $(SRC:%.cpp=$(OBJ_DIR)%.o)

HEADERS = $(wildcard *.hpp)

CXX = c++ -Wall -Wextra -Werror -Wshadow -std=c++98

all: $(NAME) 

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)
	echo "Program Ready !!"

$(OBJ_DIR)%.o: %.cpp $(HEADERS)
	mkdir -p $(OBJ_DIR)
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJ) && rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re