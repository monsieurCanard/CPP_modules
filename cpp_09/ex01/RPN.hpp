/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:37:00 by anthony           #+#    #+#             */
/*   Updated: 2024/08/31 10:57:06 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define SUCCESS 0
#define FAILURE 1

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <stdexcept>
#include <cctype>
#include <climits>
#include <cstdlib>

#define ORANGE "\033[38;5;208m"
#define RED "\033[38;5;196m"
#define TEAL "\033[38;5;49m"
#define PURPLE "\033[38;5;129m"
#define OLIVE "\033[38;5;58m"
#define RESET "\033[0m"

class RPN {
	private :
		std::stack<std::string>	_operator;
		
		void	makeOperation(std::string &token);
		int		popOperandAndVerif();


	public :
		RPN();
		~RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);

		void	calculator(char *operation);

};