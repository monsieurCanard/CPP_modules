/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:34:40 by anthony           #+#    #+#             */
/*   Updated: 2024/07/11 17:38:10 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "MateriaSource.hpp"


class MateriaSource {
	
	protected :
		MateriaSource *_inventory[4];


	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &src);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
}




# endif