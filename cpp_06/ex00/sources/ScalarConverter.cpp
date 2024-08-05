/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:24:41 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/05 14:54:00 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

size_t	onlyDigit(std::string str)
{
	int i = 0;
	while (str[i++] != '\0')
	{
		if (!isdigit(str[i]))
			return i;
	}
	return i;
}
/**
 * ! Check if the string is a char, int, float, double or special case
 */

bool	isChar(std::string str) {
	if (str.length() == 1 && isprint(str[0]) && !isdigit(str[0]))
		return true;
	return false;
}

bool	isInt(std::string str) {
	if (onlyDigit(str) == str.length())
		return true;
	return false;
}

bool	isFloatOrDouble(std::string str) {
	size_t i = onlyDigit(str);
	if (str[i] == 'f' && i == str.length() - 1)
		return true;
	else if (str[i] == '.' && i < str.length() - 1)
	{
		i++;
		if ((onlyDigit(str.substr(i)) == str.substr(i).length())
			|| (onlyDigit(str.substr(i)) == str.substr(i).length() - 1 && str[str.length() - 1] == 'f'))
			return true;
	}
	return false;
}

bool	isSpecial(std::string str) {

	std::string special_cases[5] = {"nan", "+inf", "-inf", "-inff", "+inff"};
	for (int i = 0; i < 5; i++) {
		if (str == special_cases[i])
			return true;
	}
	return false;
}

/**
 * ! Print the result
 */
void	printChar(char c)
{
	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

/**
 * ! Je verifie le int max et int min comme ceci car l'overflow fait revenir a -2147483648 a l'ecole
 */
void	printInt(int i, std::string str)
{
	if ((i == -2147483648 && str == "-2147483648")|| (i == 2147483647 && str == "2147483647"))
		std::cout << "int: " << i << std::endl;
	else if (i <= std::numeric_limits<int>::min() || i >= std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

void	printFloat(float f)
{
	if (f < -FLT_MAX || f > FLT_MAX)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
}

void	printDouble(double d)
{
	if (d < -DBL_MAX || d > DBL_MAX)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	printSpecial(std::string str)
{
	std::string special_cases[5] = {"nan", "+inf", "-inf", "-inff", "+inff"};
	
	for (int i = 0; i < 5; i++) {
		if (str == special_cases[i]) {
			if (i < 3)
				std::cout << "char: impossible\nint: impossible\nfloat: " << str << "f\ndouble: " << str << std::endl;
			else if (i >= 3) {
				std::string inf_double = str.substr(0, 4);
				std::cout << "char: impossible\nint: impossible\nfloat: " << str << "\ndouble: " << inf_double << std::endl;
			}
			return;
		}
	}
}

/**
 * ! Verif Input and check if the input mix different type
 */
bool	verifPromptMix(std::string str) {
	if (str.length() == 1 && isprint(str[0]) && !isdigit(str[0]))
		return true;
	for (size_t i = 0; i < str.length(); i++) {
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			continue;
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
			return false;
	}
	return true;
}

bool	verifPrompt(std::string str) {
	
	typedef bool (*isType)(std::string);
	isType types[4] = {isChar, isInt, isFloatOrDouble, isSpecial};

	for (int j = 0; j < 4; j++)
	{
		if (types[j](str) == true)
			break;
		else if (j == 3) {
			std::cout << "Input Invalid" << std::endl;
			return false;
		}
	}
	if (isSpecial(str) == false && verifPromptMix(str) == false)
	{
		std::cout << "Input Invalid" << std::endl;
		return false;
	}
	return true;
}

/**
 * ! Convert the string to char, int, float and double
 */
#include <stdio.h>
void ScalarConverter::convert(std::string str) {

	char	c;
	int		i;
	float	f;
	double	d;

	if (verifPrompt(str) == false)
		return;
	if (isChar(str))
		d = static_cast<double>(str.at(0));
	else
		d = strtod(str.c_str(), NULL);

	f = static_cast<float>(d);
	i = static_cast<int>(d);
	printf("%d\n", i);
	if (i > 127 || i < -128)
		std::cout << "char: impossible" << std::endl;
	else {
		c = static_cast<char>(i);
		printChar(c);
	}

	if (isSpecial(str)) return (printSpecial(str));

	std::cout << std::fixed << std::setprecision(1);
	printFloat(f);
	printInt(i, str);
	printDouble(d);
}