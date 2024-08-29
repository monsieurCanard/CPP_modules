/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:37:00 by anthony           #+#    #+#             */
/*   Updated: 2024/08/29 17:53:17 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <stdexcept>
#include <cctype>
#include <cstdlib>


class RPN {
	private :
		std::stack<std::string> _operator;
		void	makeOperation(std::string &token);


	public :
		RPN();
		~RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);

		void calculator(char *operation);

};