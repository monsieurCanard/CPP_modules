/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:53:50 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 08:20:38 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	if (this != &copy)
		AForm::operator=(copy);
	return *this;
}


void ShrubberyCreationForm::action(Bureaucrat const &executor) const {

	(void)executor;
	std::ofstream file((_target + "_shrubbery").c_str(), std::ios::out);
	if (!file.is_open())
		throw ShrubberyCreationForm::FileNotOpenException();
	file << TREE << std::endl << LITTLETREE << std::endl;
	file.close();
	std::cout << "Shrubbery has been created in file " << TEAL << _target << "_shrubbery" << RESET << std::endl;
	
}

const char *ShrubberyCreationForm::FileNotOpenException::what() const throw() {
	return "File could not be opened";
}