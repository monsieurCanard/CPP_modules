/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:57:20 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 16:18:46 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0) {
		return new A();
	} else if (i == 1) {
		return new B();
	} else {
		return new C();
	}
}

void identify_from_pointer(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void identify_from_reference(Base& p) {
	if (dynamic_cast<A*>(&p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(&p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(&p)) {
		std::cout << "C" << std::endl;
	}
}

int main(void) {
	
	Base* base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
	return 0;
}