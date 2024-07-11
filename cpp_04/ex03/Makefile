# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 13:21:10 by Monsieur_Ca       #+#    #+#              #
#    Updated: 2024/07/11 12:54:59 by Monsieur_Ca      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

SRC_DIR = sources/
OBJ_DIR = obj/
INC_DIR = includes/

SRC	=	$(SRC_DIR)main.cpp			\
		$(SRC_DIR)Animal.cpp		\
		$(SRC_DIR)Dog.cpp			\
		$(SRC_DIR)Cat.cpp			\
		$(SRC_DIR)WrongAnimal.cpp	\
		$(SRC_DIR)Brain.cpp		\
		$(SRC_DIR)WrongCat.cpp

OBJ = $(SRC:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

HEADERS = $(wildcard $(INC_DIR)*.hpp)

CXX = c++ -Wall -Wextra -Werror -Wshadow -std=c++98 -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(OBJ) -o $(NAME)
	@echo "Program Ready !!"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	@$(CXX) -c $< -o $@

clean:
	@rm -f $(OBJ) && rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re