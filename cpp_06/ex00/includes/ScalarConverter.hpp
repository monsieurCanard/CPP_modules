/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:20:21 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 15:25:30 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <cfloat>
#include <cmath>
#include <ctype.h>
#include <iomanip>

class ScalarConverter {
	private :
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter &operator=(const ScalarConverter &src);

		static bool isChar(std::string str);
		static bool isInt(std::string str);
		static bool isFloatOrDouble(std::string str);
		static bool isSpecial(std::string str);

		static void printChar(char c);
		static void printInt(int i, std::string str);
		static void printFloat(float f);
		static void printDouble(double d);
		static void printSpecial(std::string str);
		
		static bool verifPrompt(std::string str);
		static bool verifPromptMix(std::string str);
		static size_t onlyDigit(std::string str);

	public : 
		static void convert(std::string str);
		typedef bool (*isType)(std::string);
};