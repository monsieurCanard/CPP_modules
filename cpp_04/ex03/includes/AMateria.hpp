/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:10:15 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 14:51:53 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

#include "Character.hpp"

class AMateria {

	protected:
		std::string type;

	public :
		AMateria();
		~AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &operand);

		std::string const & getType() const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target);
};

# endif