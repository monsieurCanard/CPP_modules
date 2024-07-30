/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:27:38 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 11:54:52 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private :
		Brain* _brain;
	public :
		Cat();
		~Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &operand);

		void	makeSound() const;
		
};

# endif