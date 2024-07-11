/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:18:01 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 16:08:02 by anthony          ###   ########.fr       */
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

		AMateria *clone() const;
};

# endif