# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anthony <anthony@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 13:21:10 by Monsieur_Ca       #+#    #+#              #
#    Updated: 2024/07/05 17:12:30 by anthony          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRC_DIR = sources/
OBJ_DIR = obj/

SRC	=	$(SRC_DIR)Harl.cpp		\
		$(SRC_DIR)main.cpp

OBJ = $(SRC:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

HEADERS = $(wildcard $(SRC_DIR)*.hpp)

CXX = c++ -Wall -Wextra -Werror -std=c++98

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