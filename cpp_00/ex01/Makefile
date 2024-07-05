# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anthony <anthony@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 13:21:10 by Monsieur_Ca       #+#    #+#              #
#    Updated: 2024/07/04 16:42:00 by anthony          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC_DIR = sources/
OBJ_DIR = obj/

SRC	=	$(SRC_DIR)phonebook.cpp			\
		$(SRC_DIR)phonebook_utils.cpp	\
		$(SRC_DIR)contact.cpp			\
		$(SRC_DIR)main.cpp

OBJ = $(SRC:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

HEADERS = $(wildcard $(SRC_DIR)*.hpp)

CXX = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(OBJ) -o $(NAME)
	@echo "Phonebook Ready !!"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	@$(CXX) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re