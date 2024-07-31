/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:47:36 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 15:49:58 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {

	Data data;
	data.s1 = "Hello";
	data.s2 = "World";
	data.n = 42;

	uintptr_t raw = Serializer::serialize(&data);
	Data* ptr = Serializer::deserialize(raw);

	std::cout << "s1: " << ptr->s1 << std::endl;
	std::cout << "s2: " << ptr->s2 << std::endl;
	std::cout << "n: " << ptr->n << std::endl;

	return 0;
}