/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:15:05 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/08 16:46:28 by Monsieur_Ca      ###   ########.fr       */
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
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& src);
		~Fixed();

		Fixed&	operator=(const Fixed &src);
		bool	operator>(const Fixed &src);
		bool	operator<(const Fixed &src);
		bool	operator>=(const Fixed &src);
		bool	operator<=(const Fixed &src);
		bool	operator==(const Fixed &src);
		bool	operator!=(const Fixed &src);
		
		Fixed&	operator+(const Fixed &src);
		Fixed&	operator-(const Fixed &src);
		Fixed&	operator*(const Fixed &src);
		Fixed&	operator/(const Fixed &src);

		int				toInt() const;
		float			toFloat() const;
		int				getRawBits() const;
		void			setRawBits(int const raw);
		static Fixed&	min(Fixed &nb1, int &nb2);
		static Fixed&	min_const(const Fixed &nb1, const Fixed &nb2);
		static Fixed&	max(Fixed &nb1, Fixed &nb2);
		static Fixed&	max_const(const Fixed &nb1, const Fixed &nb2);
};

std::ostream& operator<<(std::ostream &os, const Fixed &src);


#endif