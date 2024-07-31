/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:17:22 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 17:38:12 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>
#include <cstdlib>
#include <ctime>


template <typename T>

class Array {
	private:
		T *_array;
		unsigned int _size;

	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(Array const &src);
		~Array<T>();

		Array<T> &operator=(Array const &rhs);
		T &operator[](unsigned int n);

		unsigned int size() const;

		class OutOfLimitsException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

};



#endif