/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:57:20 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/05 10:48:21 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
	srand(time(NULL));
	int i = rand() % 3;
	switch (i) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}

void identify_from_pointer(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
	else {
		std::cout << "Unknown" << std::endl;
	}
}

/**
 * ! Pour l'identification par référence,
 * ! il faut utiliser le & pour que la reference soit un pointeur 
 * ! et que l'echec du dynamique cast
 * ! me renvoie un nullptr et pas une exception (bad_cast)
 */
void identify_from_reference(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch (...) {}
	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;
		
	}
	catch (...) {}
	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch (...) {}
}

int main(void) {
	
	Base* base = generate();
	try {
		identify_from_pointer(base);
		identify_from_reference(*base);
	}
	catch (...) {
		std::cout << "Unknown" << std::endl;
	}
	delete base;
}