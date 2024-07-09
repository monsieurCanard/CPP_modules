/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:17:45 by anthony           #+#    #+#             */
/*   Updated: 2024/07/09 13:35:02 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP

#include "Point.hpp"
#include "Fixed.hpp"


class Point
{
	private:
		Fixed	x;
		Fixed	y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& src);
		Point& operator=(const Point &src);
		~Point();
		
		static float	getArea(const Point p1, const Point p2, const Point p3);
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);


# endif