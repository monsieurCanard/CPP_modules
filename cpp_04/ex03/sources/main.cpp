/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:12:01 by anthony           #+#    #+#             */
/*   Updated: 2024/07/12 10:04:30 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	AMateria* tmp_junk;
	std::cout << "Creation new MateriaSource" << std::endl;
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl << std::endl;


	
	std::cout << "Learn new Materia" << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl << std::endl;


	std::cout << "Learn new Materia" << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl << std::endl;







	std::cout << "Creation new Character" << std::endl;
	ICharacter* me = new Character("me");
	std::cout << std::endl << std::endl;


	std::cout << "Creation new Materia" << std::endl;
	AMateria* tmp;
	std::cout << std::endl << std::endl;





	std::cout << "Create Materia of type ice" << std::endl;
	tmp = src->createMateria("ice");
	std::cout << std::endl << std::endl;

	std::cout << "Equip Materia" << std::endl;
	me->equip(tmp);
	std::cout << std::endl << std::endl;

	std::cout << "Create Materia of type cure" << std::endl;
	tmp = src->createMateria("cure");
	std::cout << std::endl << std::endl;
	
	std::cout << "Equip Materia" << std::endl;
	me->equip(tmp);
	std::cout << std::endl << std::endl;



	std::cout << "Creation new Character" << std::endl;
	ICharacter* bob = new Character("bob");

	std::cout << std::endl << std::endl;
	std::cout << "Use Materia" << std::endl;
	me->use(0, *bob);
	std::cout << std::endl << std::endl;

	std::cout << "Use Materia" << std::endl;
	me->use(1, *bob);
	std::cout << std::endl << std::endl;


	tmp_junk = me->getMateria(0);
	me->unequip(0);
	delete tmp_junk;
	tmp_junk = me->getMateria(1);
	me->unequip(1);
	delete tmp_junk;

	std::cout << "Destruction of all objects" << std::endl;
	delete bob;
	delete me;
	delete src;

	return 0;
}