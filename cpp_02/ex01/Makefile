# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anthony <anthony@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 13:21:10 by Monsieur_Ca       #+#    #+#              #
#    Updated: 2024/07/24 08:03:55 by anthony          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC_DIR = sources/
OBJ_DIR = obj/
INC_DIR = includes/

SRC	=	$(SRC_DIR)Fixed.cpp		\
		$(SRC_DIR)main.cpp

OBJ = $(SRC:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

HEADERS = $(wildcard $(INC_DIR)*.hpp)

CXX = c++ -Wall -Wextra -Werror -std=c++98 -I $(INC_DIR)

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