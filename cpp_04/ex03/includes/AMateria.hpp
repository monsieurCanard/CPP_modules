/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:10:15 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/12 09:31:33 by anthony          ###   ########.fr       */
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

		/// Pure virtual function, have to be implemented in derived classes 
		virtual AMateria *clone() const = 0;

		/// Virtual function, can be overriden in derived classes
		virtual void use(ICharacter& target);
};

# endif