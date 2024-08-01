/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:20:05 by anthony           #+#    #+#             */
/*   Updated: 2024/08/01 16:29:39 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <vector>
#include <exception>
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public :
		MutantStack();
		MutantStack(const MutantStack &src);
		~MutantStack();
		MutantStack &operator=(const MutantStack &src);
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"

#endif