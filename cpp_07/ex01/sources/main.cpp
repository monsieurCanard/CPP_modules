/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:47:19 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 17:14:14 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T, typename Func>
void iter(T *array, size_t size, Func func)
{
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}
template <typename T>
void	print(T const &x)
{
	std::cout << x << std::endl;
}

int main(void) {
	int intArray[] = {1, 2, 3, 4, 5};
	std::string stringArray[] = {"Hello", "World", "!"};

	std::cout << "intArray: ";
	iter(intArray, 5, print<int>);

	std::cout << std::endl << "stringArray: ";
	iter(stringArray, 3, print<std::string>);
}