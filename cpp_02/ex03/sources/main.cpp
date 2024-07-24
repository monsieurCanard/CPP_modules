/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:13:57 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/24 10:16:10 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

#define BLUE "\033[1;36m"
#define RED_B "\033[1;41m"
#define ORANGE_B "\033[1;43m"
#define RESET "\033[0m"

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point);

int main( void ) {

	Point	a(0.5f, 5.5f);
	Point	b(4.6f, 3.5f);
	Point	c(1.1f, 1.1f);
	Point	point(2.7f, 3.1f);

	std::cout << BLUE << "Point x= " << point.getX() << " y= " << point.getY() << std::endl << std::endl;
	std::cout << ORANGE_B << "The triangle is made of 3 points: " << RESET << std::endl << std::endl;
	std::cout << BLUE << "A x= " << a.getX() << " y= " << a.getY() << std::endl;
	std::cout << "B x= " << b.getX() << " y= " << b.getY() << std::endl;
	std::cout << "C x= " << c.getX() << " y= " << c.getY() << RESET << std::endl << std::endl;

	if (bsp(a, b, c, point)) {
		std::cout	<< ORANGE_B
					<< "Le point est dans le triangle !"
					<< RESET << std::endl;
	}
	else {
		std::cout	<< ORANGE_B
					<< "Le point est pas dans le triangle !"
					<< RESET << std::endl;
	}
}
