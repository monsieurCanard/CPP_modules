/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:10:15 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 12:16:38 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria {

	protected:
		std::string _type;

	public :
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &src);

		std::string const & getType() const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target);
};

# endif