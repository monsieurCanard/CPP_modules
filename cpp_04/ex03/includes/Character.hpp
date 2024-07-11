/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:46:58 by anthony           #+#    #+#             */
/*   Updated: 2024/07/11 17:28:42 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"


class Character : public ICharacter, public AMateria {
	
	protected :
		std::string _name;
		AMateria* _inventory[4];
		
	
	private :
		Character();
		~Character();
		Character(std::string name);
		Character(const Character &copy);
		Character &operator=(const Character &src);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

# endif