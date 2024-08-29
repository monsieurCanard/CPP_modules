/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:36:46 by anthony           #+#    #+#             */
/*   Updated: 2024/08/29 18:43:52 by anthony          ###   ########.fr       */
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

void	RPN::makeOperation(std::string &token) {
	
	int		operand1 = atoi(_operator.top().c_str());
	_operator.pop();

	int		operand2 = atoi(_operator.top().c_str());
	_operator.pop();

	int result = 0;
	if (token == "+")
		result = operand2 + operand1;
	else if (token == "-")
		result = operand2 - operand1;
	else if (token == "*")
		result = operand2 * operand1;
	else if (token == "/")
		result = operand2 / operand1;
	else if (token == "%")
		result = operand2 % operand1;
	else {
		throw std::runtime_error("Invalid operator");
		return ;
	}
	std::stringstream res;
	res << result;
	_operator.push(res.str());
}

void RPN::calculator(char *operation) {
	
	std::string		op(operation);
	size_t			start_pos = 0;

	while (start_pos < op.length()) {
		
		size_t end_pos = op.find(" ", start_pos);
		std::string token;

		if (end_pos == std::string::npos) {
			token = op.substr(start_pos, op.length() - start_pos);
			makeOperation(token);
			break ;
		}
		token = op.substr(start_pos, end_pos - start_pos);
		start_pos = end_pos + 1;

		if (isdigit(token[0]))
			_operator.push(token);
		else
			makeOperation(token);
	}
	std::cout << _operator.top() << std::endl;
}