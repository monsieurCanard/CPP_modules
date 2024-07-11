/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:18:01 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 14:26:02 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria {
	
	public:
		Cure();
		~Cure();
		Cure(const Cure &copy);
		Cure &operator=(const Cure &src);

		AMateria* clone() const;
		void use(ICharacter& target);
};

# endif