/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:34:13 by anthony           #+#    #+#             */
/*   Updated: 2024/08/01 14:00:19 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <exception>
#include <iostream>
#include <string>
#include <algorithm>

class Span {
	private :
		unsigned int				_n;
		std::vector<unsigned int>	_vect;
	public :
		Span();
		Span(unsigned int n);
		Span(const Span &src);
		~Span();
		Span &operator=(const Span &src);

		void addNumber(unsigned int n);
		void addNumbers(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		
		class NoSpanException : public std::exception {
			const char* what() const throw() {
				return ("There is no span to find");
			}
		};
		
		
		class FullSpanException : public std::exception {
			const char* what() const throw() {
				return ("The span is full");
			}
		};
};





#endif 