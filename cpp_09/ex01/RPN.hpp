/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:37:00 by anthony           #+#    #+#             */
/*   Updated: 2024/09/02 11:58:54 by anthony          ###   ########.fr       */
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

		void	calculator(std::string &op);

};

	class EmptyOperation : public std::exception {
	public :
		virtual const char *what() const throw() {
			return (RED "Error : Empty operation\033[0m");
		}
};

	class InvalidExpression : public std::exception {
	public :
		virtual const char *what() const throw() {
			return (RED "Error : Invalid Expression\033[0m");
		}
};

	class DivisionByZero : public std::exception {
	public :
		virtual const char *what() const throw() {
			return (RED "Error : Division by zero\033[0m");
		}
};
	class ArgNotANumber : public std::exception {
	public :
		virtual const char *what() const throw() {
			return (RED "Error : Argument is not a number\033[0m");
		}
};

	class InvalidOperator : public std::exception {
	public :
		virtual const char *what() const throw() {
			return (RED "Error : Invalid operator\033[0m");
		}
};