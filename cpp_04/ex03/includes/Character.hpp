/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:46:58 by anthony           #+#    #+#             */
/*   Updated: 2024/07/12 10:02:22 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	
	protected :
		std::string _name;
		AMateria* _inventory[4];

	public:
		Character();
		~Character();
		Character(std::string name);
		Character(const Character &copy);
		Character &operator=(const Character &src);

		std::string const & getName() const;
		AMateria* getMateria(int idx) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

# endif