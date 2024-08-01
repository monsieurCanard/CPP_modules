/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:18:18 by anthony           #+#    #+#             */
/*   Updated: 2024/08/01 10:45:20 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>
#include <string>
#include <vector>

template <typename T>
class exception : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Error: Value not found");
		}
};

template <typename T>
int easyfind(T &container, int value)
{
	typename T::iterator found = std::find(container.begin(), container.end(), value);
	if (found == container.end())
		throw exception<T>();
	return (*found);
}

#endif