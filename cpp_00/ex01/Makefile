# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anthony <anthony@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 13:21:10 by Monsieur_Ca       #+#    #+#              #
#    Updated: 2024/06/13 16:04:53 by anthony          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC	= phonebook.cpp \
		contact.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = $(SRC:.cpp=.hpp)

CXX = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean

re: fclean all

.PHONY: all clean fclean re