/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:41:41 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 15:49:43 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>

struct Data {
	std::string s1;
	std::string s2;
	int n;
};

class Serializer {
	private :
		Serializer();
		~Serializer();
		Serializer(const Serializer &src);
		Serializer &operator=(const Serializer &src);



	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};




#endif