/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:13:57 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/09 12:06:15 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {

	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const	c( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const	d( Fixed( 5.05f ) + Fixed( 2.515f ) );
	Fixed const	e( Fixed( 5.05f ) - Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << "a = " <<  a << std::endl;
	std::cout << "b = " <<  b << std::endl;

	std::cout << "Test des fonctions max et min entre a et b: " << std::endl;
	std::cout << "b = 5.05f * 2 " << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl
	<< std::endl;

	std::cout << "Test des fonctions max et min  entre b et c: " << std::endl;
	std::cout << "c = 5.05f / 2 " << std::endl;
	std::cout << Fixed::max( b, c ) << std::endl;
	std::cout << Fixed::min( b, c ) << std::endl
	<< std::endl;

	std::cout << "Test des fonctions max et min  entre c et d: " << std::endl;
	std::cout << "d = 5.05f + 2.515 " << std::endl;
	std::cout << Fixed::max( c, d ) << std::endl;
	std::cout << Fixed::min( c, d ) << std::endl
	<< std::endl;

	std::cout << "Test des fonctions max et min  entre d et e: " << std::endl;
	std::cout << "e = 5.05f - 2 " << std::endl;
	std::cout << Fixed::max( d, e ) << std::endl;
	std::cout << Fixed::min( d, e ) << std::endl
	<< std::endl;

	return 0;
}
