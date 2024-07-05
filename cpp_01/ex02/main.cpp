/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:50:34 by anthony           #+#    #+#             */
/*   Updated: 2024/07/05 11:03:10 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(void) {

	std::string line = "HI THIS IS BRAIN";
	std::string* stringPTR = &line;
	std::string& stringREF = line;

	std::cout << "Adress of line          : " << &line << std::endl;
	std::cout << "Adress held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Adress held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of line     : " << line << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
}