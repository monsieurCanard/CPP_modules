/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:50:34 by anthony           #+#    #+#             */
/*   Updated: 2024/07/23 15:34:42 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

#define TEAL "\033[38;5;49m"
#define PURPLE "\033[38;5;129m"
#define RESET "\033[0m"

int main(void) {

	std::string line = "HI THIS IS BRAIN";
	std::string* stringPTR = &line;
	std::string& stringREF = line;

	std::cout << std::endl;

	std::cout << PURPLE << "Adress of line          : " << &line << std::endl;
	std::cout << "Adress held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Adress held by stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << TEAL << "Value of line     : " << line << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << RESET << std::endl;
}