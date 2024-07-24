/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:14:24 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/23 16:49:38 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	nb_fixed = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	nb_fixed = value << nb_fract;
}

Fixed::Fixed(const float value) {

	std::cout << "Float constructor called" << std::endl;
	nb_fixed = roundf(value * (1 << this->nb_fract));
}

Fixed::~Fixed() {
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src) {
		nb_fixed = src.nb_fixed;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &src) {
	os << src.toFloat();
	return os;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->nb_fixed;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->nb_fixed = raw;
}

float	Fixed::toFloat() const {
	return (float)(nb_fixed) / (1 << nb_fract);
}

int	Fixed::toInt() const {
	return nb_fixed >> nb_fract;
}