/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:34:10 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 11:17:08 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	private :

	public :
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &copy);
		WrongCat &operator=(const WrongCat &src);

		void	makeSound() const;
		
};


# endif