/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:20:29 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 17:40:50 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(Array const &src) : _array(new T[src._size]), _size(src._size) {
	for (unsigned int i = 0; i < _size; i++) {
		_array[i] = src._array[i];
	}
}

template <typename T>
Array<T>::~Array() {
	delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other) {
	if (this != &other) {
		delete[] _array;
		_array = new T[other._size];
		_size = other._size;
		for (unsigned int i = 0; i < _size; i++) {
			_array[i] = other._array[i];
		}
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int n) {
	if (n >= _size) {
		throw OutOfLimitsException();
	}
	return _array[n];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

template <typename T>
const char *Array<T>::OutOfLimitsException::what() const throw() {
	return "Error: Out of limits";
}
template class Array<int>;