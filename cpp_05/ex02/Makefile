# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 10:56:58 by Monsieur_Ca       #+#    #+#              #
#    Updated: 2024/07/30 15:39:15 by Monsieur_Ca      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

SRC_DIR = sources/
OBJ_DIR = obj/
INC_DIR = includes/

SRC	=	$(SRC_DIR)main.cpp			\
		$(SRC_DIR)Bureaucrat.cpp	\
		$(SRC_DIR)AForm.cpp			\
		$(SRC_DIR)ShrubberyCreationForm.cpp	\
		$(SRC_DIR)RobotomyRequestForm.cpp	\
		$(SRC_DIR)PresidentialPardonForm.cpp

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