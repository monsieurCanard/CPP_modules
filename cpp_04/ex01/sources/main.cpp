/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:16:28 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 14:23:45 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *v = new Cat();
	Animal	*animal[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()}; 
	
	std::cout << std::endl;
	 for (int i = 0; i < 6; i++)
	 {
		animal[i]->makeSound();
		delete animal[i];
		std::cout << std::endl;
	 }
	
	delete j;
	std::cout << std::endl;
	delete v;
	return 0;
}