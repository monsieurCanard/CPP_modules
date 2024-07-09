/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:23:11 by anthony           #+#    #+#             */
/*   Updated: 2024/07/09 13:34:42 by anthony          ###   ########.fr       */
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

float	Point::getArea(const Point p1, const Point p2, const Point p3) {
	float	area;

	area = ((p1.x.toFloat()*(p2.y.toFloat() - p3.y.toFloat()) +
			p2.x.toFloat()*(p3.y.toFloat() - p1.y.toFloat()) +
			p3.x.toFloat()*(p1.y.toFloat() - p2.y.toFloat())) / 2.0);
	if (area < 0)
		return -area;
	else
		return area;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {

	Fixed area_base(Point::getArea(a, b, c));
	Fixed area_point1(Point::getArea(point, b, c));
	Fixed area_point2(Point::getArea(a, point, c));
	Fixed area_point3(Point::getArea(a, b, point));
	if ((area_point1.toFloat() + area_point2.toFloat() + area_point3.toFloat())
		== area_base.toFloat())
		return true;
	std::cout << area_point1 << std::endl;
	std::cout << area_point2 << std::endl;
	std::cout << area_point3 << std::endl;
	std::cout << "base :" << area_base << std::endl;
	return false;
}