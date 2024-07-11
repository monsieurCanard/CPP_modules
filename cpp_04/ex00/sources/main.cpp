/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:16:28 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 12:28:52 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *k = new WrongAnimal();
	const WrongAnimal *l = new WrongCat();

	std::cout << std::endl;

	std::cout << "Animal meta est un " << meta->getType() << std::endl;

	std::cout << std::endl;

	std::cout << "Animal j est un " << j->getType() << std::endl;

	std::cout << std::endl;

	std::cout << "Animal i est un " << i->getType() << std::endl;

	std::cout << std::endl;

	std::cout << "Animal k est un " << k->getType() << std::endl;

	std::cout << std::endl;

	std::cout << "Animal l est un " << l->getType() << std::endl;

	std::cout << std::endl;

	meta->makeSound(); 
	std::cout << std::endl;
	i->makeSound();
	std::cout << std::endl;
	j->makeSound();
	std::cout << std::endl;
	k->makeSound();
	std::cout << std::endl;
	l->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete k;
	delete l;

	return 0;
}