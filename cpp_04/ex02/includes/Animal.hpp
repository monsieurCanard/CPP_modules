/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:08:58 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 12:11:19 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define ORANGE "\033[38;5;208m"
#define RED "\033[38;5;196m"
#define TEAL "\033[38;5;49m"
#define PURPLE "\033[38;5;129m"
#define OLIVE "\033[38;5;58m"
#define RESET "\033[0m"


# include <iostream>
# include <string>

 class Animal {

	protected:
		std::string _type;
	public:
		Animal();
		
		/**
		 * ! Has to be virtual to be able to call the right destructor of the derived class
		 * ! when deleting a pointer to the base class
		 */
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &operand);

		virtual void		makeSound() const = 0;
		virtual std::string	getType() const;
};	


# endif