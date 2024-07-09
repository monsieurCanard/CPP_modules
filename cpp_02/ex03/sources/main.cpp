/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:13:57 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/09 13:32:39 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void ) {

	Point	a(0.5f, 5.5f);
	Point	b(6.6f, 10.5f);
	Point	c;
	Point	point(16.2f, 26.9f);

	if (bsp(a, b, c, point)) {
		std::cout << "Le point est dans le triangle !"
					<< std::endl;
	}
	else {
		std::cout << "Le point est pas dans le triangle !"
					<< std::endl;
	}
	return 0;
}
