/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:42:31 by anthony           #+#    #+#             */
/*   Updated: 2024/08/01 14:04:40 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &src) {
	*this = src;
}

Span::~Span() {}

Span &Span::operator=(const Span &src) {
	_n = src._n;
	_vect = src._vect;
	return (*this);
}

void Span::addNumber(unsigned int n) {
	if (_vect.size() >= _n)
		throw FullSpanException();
	_vect.push_back(n);
}

void Span::addNumbers(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end) {
	if (_vect.size() + std::distance(begin, end) > _n)
		throw FullSpanException();
	_vect.insert(_vect.end(), begin, end);
}

unsigned int Span::shortestSpan() {
	if (_vect.size() <= 1)
		throw std::exception();

	std::vector<unsigned int> tmp = _vect;
	
	std::sort(tmp.begin(), tmp.end());


	unsigned int min = tmp[1] - tmp[0];
	
	for (size_t i = 1; i < tmp.size(); i++)
	{
		unsigned int diff = tmp[i] - tmp[i - 1];
		if (diff < min)
			min = diff;
	}
	return (min);
}

unsigned int Span::longestSpan() {
	if (_vect.size() <= 1)
		throw std::exception();

	std::vector<unsigned int> tmp = _vect;
	
	std::sort(tmp.begin(), tmp.end());

	unsigned int max = tmp[tmp.size() - 1] - tmp[0];
	
	return (max);
}