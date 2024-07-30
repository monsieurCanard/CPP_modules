/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:08:58 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 11:20:42 by Monsieur_Ca      ###   ########.fr       */
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
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &operand);

		virtual void	makeSound() const;
		std::string		getType() const;
};	


# endif