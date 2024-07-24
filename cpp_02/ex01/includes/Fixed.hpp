/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:15:05 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/23 16:42:41 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string.h>

class Fixed
{
	private:
	int					nb_fixed;
	static const int	nb_fract = 8;
	
	public:
		Fixed();
		~Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed &src);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream& operator<<(std::ostream &os, const Fixed &src);


#endif