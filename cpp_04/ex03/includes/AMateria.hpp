/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:10:15 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 16:25:44 by anthony          ###   ########.fr       */
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
		AMateria &operator=(const AMateria &src);

		std::string const & getType() const;

		/// Pure virtual function, have to be implemented in derived classes 
		virtual AMateria *clone() const = 0;

		virtual void use(ICharacter& target);
};

# endif