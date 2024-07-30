/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:35:40 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/30 16:18:21 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "AForm.hpp"

#define TREE "    *    \n   ***   \n  *****  \n ******* \n*********\n   ***   \n   ***   \n   ***   \n"

class ShrubberyCreationForm : public AForm {

	private:
		const std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &shrubberyCreationForm);

		void action(Bureaucrat const &executor) const;

		class FileNotOpenException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, const ShrubberyCreationForm &shrubberyCreationForm);