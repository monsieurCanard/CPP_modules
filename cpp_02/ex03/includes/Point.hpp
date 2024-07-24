/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:17:45 by anthony           #+#    #+#             */
/*   Updated: 2024/07/24 09:54:25 by anthony          ###   ########.fr       */
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
		~Point();
		Point(const float x, const float y);
		Point(const Point& src);
		Point& operator=(const Point &src);
		
		Fixed	getX() const;
		Fixed	getY() const;
};



# endif