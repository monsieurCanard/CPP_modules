/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:47:19 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/05 16:18:09 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
}

int main(void) {
	int intArray[] = {1, 2, 3, 4, 5};
	std::string stringArray[] = {"Hello", "World", "!"};

	std::cout << "intArray: " << std::endl;
	iter(intArray, 5, print<int>);

	std::cout << std::endl << "stringArray: " << std::endl;
	iter(stringArray, 3, print<std::string>);
}