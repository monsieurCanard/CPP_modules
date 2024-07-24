/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:23:11 by anthony           #+#    #+#             */
/*   Updated: 2024/07/24 09:50:34 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0)) {}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {}

Point::~Point() {
	
}

Point::Point(const Point& src) {
	*this = src;
}

Point&	Point::operator=(const Point &src) {
	if (this != &src) {
		x = src.x;
		y = src.y;
	}
	return *this;
}

Fixed	Point::getX() const {
	return x;
}

Fixed	Point::getY() const {
	return y;
}
