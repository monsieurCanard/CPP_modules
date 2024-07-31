/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:45:59 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 15:47:06 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer::Serializer(const Serializer &src) {
	*this = src;
}

Serializer &Serializer::operator=(const Serializer &src) {
	if (this != &src) {
	}
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data* Serializer::deserialize(uintptr_t raw) {
	Data* ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}