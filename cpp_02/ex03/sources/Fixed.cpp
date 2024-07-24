/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:14:24 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/24 09:55:44 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

Fixed::Fixed() {
	nb_fixed = 0;
}

Fixed::Fixed(const int value) {
	nb_fixed = value << nb_fract;
}

Fixed::Fixed(const float value) {
	nb_fixed = roundf(value * (1 << this->nb_fract));
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed& src) {
	*this = src;
}

/// OPERATOR

Fixed &Fixed::operator=(const Fixed &src) {
	if (this != &src) {
		nb_fixed = src.nb_fixed;
	}
	return *this;
}

bool	Fixed::operator>(const Fixed &src) {
	return nb_fixed > src.nb_fixed; 
}

bool	Fixed::operator<(const Fixed &src) {
	return nb_fixed < src.nb_fixed;
}

bool	Fixed::operator>=(const Fixed &src) {
	return nb_fixed >= src.nb_fixed;
}

bool	Fixed::operator<=(const Fixed &src) {
	return nb_fixed <= src.nb_fixed;
}

bool	Fixed::operator==(const Fixed &src) {
	return nb_fixed == src.nb_fixed;
}

bool	Fixed::operator!=(const Fixed &src) {
	return nb_fixed != src.nb_fixed;
}

Fixed	Fixed::operator+(const Fixed &src) {
	Fixed tmp(this->toFloat() + src.toFloat());

	nb_fixed = tmp.nb_fixed;
	return *this;
}

Fixed	Fixed::operator-(const Fixed &src) {
	Fixed tmp(this->toFloat() - src.toFloat());

	nb_fixed = tmp.nb_fixed;
	return *this;
}

Fixed	Fixed::operator*(const Fixed &src) {
	
	Fixed tmp(this->toFloat() * src.toFloat());

	nb_fixed = tmp.nb_fixed;
	return *this;
}

Fixed Fixed::operator/(const Fixed &src)
{
	Fixed tmp(this->toFloat() / src.toFloat());

	nb_fixed = tmp.nb_fixed;
	return *this;
}

Fixed& Fixed::operator++() {
	++nb_fixed;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed	tmp;

	tmp = *this;
	++(*this);
	return tmp;
}

Fixed Fixed::operator--(int) {
	
	Fixed	tmp = *this;
	--(*this);
	return tmp;
}

Fixed& Fixed::operator--() {
	--nb_fixed;
	return *this;
}

/**
 * ! FUNCTIONS
 */

int Fixed::getRawBits() const
{
	return this->nb_fixed;
}

void Fixed::setRawBits(int const raw)
{
	this->nb_fixed = raw;
}

float	Fixed::toFloat() const {
	return (float)(nb_fixed) / (1 << nb_fract);
}

int	Fixed::toInt() const {
	return nb_fixed >> nb_fract;
}

Fixed&	Fixed::min(Fixed &nb1, Fixed &nb2) {
	if (nb1 < nb2)
		return nb1;
	else
		return nb2;
}

const Fixed&	Fixed::min(const Fixed &nb1, const Fixed &nb2) {
	int tmp1 = nb1.toFloat();
	int tmp2 = nb2.toFloat();

	if (tmp1 < tmp2)
		return nb1;
	else
		return nb2;
}

Fixed&	Fixed::max(Fixed &nb1, Fixed &nb2) {
	if (nb1 > nb2)
		return nb1;
	else
		return nb2;
}

const Fixed&	Fixed::max(const Fixed &nb1, const Fixed &nb2) {
	int tmp1 = nb1.toFloat();
	int tmp2 = nb2.toFloat();

	if (tmp1 > tmp2)
		return nb1;
	else
		return nb2;
}

/**
 * ! OVERLOAD
 */
std::ostream& operator<<(std::ostream &os, const Fixed &src) {
	os << src.toFloat();
	return os;
}