# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 13:21:10 by Monsieur_Ca       #+#    #+#              #
#    Updated: 2024/07/18 09:20:02 by Monsieur_Ca      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = Megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm $(NAME)

re: fclean all

.PHONY: all clean fclean re