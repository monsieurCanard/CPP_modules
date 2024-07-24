/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:50:37 by anthony           #+#    #+#             */
/*   Updated: 2024/07/24 10:08:08 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	getArea(const Point &p1, const Point p2, const Point p3) {
	float	area;

	area = ((p1.getX().toFloat()*(p2.getY().toFloat() - p3.getY().toFloat()) +
			p2.getX().toFloat()*(p3.getY().toFloat() - p1.getY().toFloat()) +
			p3.getX().toFloat()*(p1.getY().toFloat() - p2.getY().toFloat())) / 2.0);
	if (area < 0)
		return -area;
	else
		return area;
}

static bool	verifPoint(const Point point, const Point &other_point) {
	if (point.getX().toFloat() == other_point.getX().toFloat()
		&& point.getY().toFloat() == other_point.getY().toFloat()) {
		return false;
		}
	return true;
}

static bool	verifPointEdge(const Point &point, const Point &p1, const Point &p2) {

	Fixed slope  = (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());
	Fixed b_line = p1.getY() - slope * p1.getX();
	Fixed coord_y = slope * point.getX() + b_line;
	Fixed margin(0.01f);

	if (coord_y - point.getY() <= margin && coord_y - point.getY() >= 0) {

		if ((point.getX() >= p1.getX() && point.getX() <= p2.getX())
			|| (point.getX() >= p2.getX() && point.getX() <= p1.getX())) {

			if ((point.getY() >= p1.getY() && point.getY() <= p2.getY())
				|| (point.getY() >= p2.getY() && point.getY() <= p1.getY())) {
				return false;
			}
		}
	}
	return true;
}

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point) {

	Point edge[3] = {a, b, c};

	for (int i = 0; i < 3; i++) {
/**
 * ! Check if the point is on an top of the triangle
 */
		if (verifPoint(point, edge[i]) == false)
			return false;
/**
 * ! Check if the point is on the edge of the triangle
 */
		else if (verifPointEdge(point, edge[i], edge[(i + 1) % 3]) == false)
			return false;
	}

/**
 * ! Check if the point is inside the triangle
 */
	Fixed area_base(getArea(a, b, c));
	Fixed area_point[3] = {getArea(a, b, point),
							getArea(a, c, point),
							getArea(b, c, point)};

	if ((area_point[0].toFloat() + area_point[1].toFloat() + area_point[2].toFloat())
		== area_base.toFloat())
		return true;
	return false;
}
