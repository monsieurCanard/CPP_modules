/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:13:57 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/23 17:19:33 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {

	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed d( Fixed( 5.05f ) + Fixed( 2.515f ) );
	Fixed e( Fixed( 5.05f ) - Fixed( 2 ) );
	Fixed const	c( Fixed( 5.05f ) / Fixed( 2 ) );

/**
 * ! SUBJECT MAIN PART
 */
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;


/**
 * ! MY MAIN PART
 */
	std::cout << "a = " <<  a << std::endl;
	std::cout << "b = " <<  b << std::endl;

	std::cout << "Test des fonctions max et min entre a et b: " << std::endl;
	std::cout << "max = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min = " << Fixed::min( a, b ) << std::endl
	<< std::endl;

	std::cout << "Test des fonctions max et min  entre b et c: " << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "max = " << Fixed::max( b, c ) << std::endl;
	std::cout << "min = " << Fixed::min( b, c ) << std::endl
	<< std::endl;

	std::cout << "Test des fonctions max et min  entre c et d: " << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "max = " << Fixed::max( c, d ) << std::endl;
	std::cout << "min = " << Fixed::min( c, d ) << std::endl
	<< std::endl;

	std::cout << "Test des fonctions max et min  entre b et e: " << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "max = " << Fixed::max( b, e ) << std::endl;
	std::cout << "min = " << Fixed::min( b, e ) << std::endl
	<< std::endl;

	return 0;
}
