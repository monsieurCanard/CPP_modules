/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:25:42 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/05 13:26:05 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>
#include <string>
#include <concepts>

template <typename T>

void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>

T min(T a, T b)
{
	return (a < b ? a : b);
}

template <typename T>

T max(T a, T b)
{
	return (a > b ? a : b);
}

#endif