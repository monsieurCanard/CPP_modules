/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:36:46 by anthony           #+#    #+#             */
/*   Updated: 2024/08/31 12:41:18 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
}

RPN::~RPN() {
}

RPN::RPN(const RPN &other) {
	*this = other;
}

RPN &RPN::operator=(const RPN &other) {
	if (this != &other) {
		_operator = other._operator;
	}
	return *this;
}

int	RPN::popOperandAndVerif() {
	std::stringstream	ss;
	int					operand;
	
	ss << _operator.top();
	_operator.pop();
	if (!(ss >> operand))
		throw std::runtime_error(RED "Error : Invalid operand (INT ONLY)\033[0m");
	ss.clear();

	return operand;
}

void	RPN::makeOperation(std::string &token) {

	int					operand1;
	int					operand2;
	int					result;
	std::stringstream	ss;

/**
 * ! Verification de la stack, de l'overflow et de la division par zero
 */
	if (_operator.size() < 2)
		throw std::runtime_error(RED "Error : Invalid Expression, not enough operand\033[0m");

	operand1 = popOperandAndVerif();
	if (token == "/" && operand1 == 0)
		throw std::runtime_error(RED"Error : Division by zero\033[0m");

	operand2 = popOperandAndVerif();

/**
 * ! Calcul du resultat
 */
	switch(token[0]) {
		case '+':
			result = operand2 + operand1;
			break;
		case '-':
			result = operand2 - operand1;
			break;
		case '*':
			result = operand2 * operand1;
			break;
		case '/':
			result = operand2 / operand1;
			break;
		case '%':
			result = operand2 % operand1;
			break;
		default:
			throw std::runtime_error(RED"Error : Invalid operator\033[0m");
	}

	std::stringstream res;
	res << result;
	_operator.push(res.str());
}

void RPN::calculator(char *operation) {
	
	std::string		op(operation);
	size_t			start_pos = 0;
	size_t			end_pos = 0;
	std::string		token;

	if (operation[0] == '\0')
		throw std::runtime_error(RED"Error : Empty string\033[0m");
	while (start_pos < op.length()) {
		
		end_pos = op.find(" ", start_pos);
		if (end_pos == std::string::npos) {
			token = op.substr(start_pos, op.length() - start_pos);
			makeOperation(token);
			break ;
		}
		token = op.substr(start_pos, end_pos - start_pos);
		start_pos = end_pos + 1;

		if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1])))
			_operator.push(token);
		else
			makeOperation(token);
	}
	if (_operator.size() != 1)
		throw std::runtime_error(RED"Error : Invalid Expression\033[0m");
	std::cout << TEAL << _operator.top() << RESET << std::endl;
}