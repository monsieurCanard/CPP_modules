/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:57:52 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/12 08:19:28 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria {

	public:
		Ice();
		~Ice();
		Ice(const Ice &copy);
		Ice &operator=(const Ice &src);

		AMateria* clone() const;
		void use(ICharacter &target);
};

# endif