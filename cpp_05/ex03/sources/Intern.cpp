/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 08:25:19 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/02 11:50:38 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &copy) {
	*this = copy;
}

Intern &Intern::operator=(Intern const &intern) {
	(void)intern;
	return *this;
}

AForm* Intern::makeForm(std::string name, std::string target) {
	std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm *form;

	for (int i = 0; i < 3; i++) {
		if (name == forms[i]) {
			switch (i) {
				case 0:
					form = new RobotomyRequestForm(target);
					break;
				case 1:
					form = new PresidentialPardonForm(target);
					break;
				case 2:
					form = new ShrubberyCreationForm(target);
					break;
			}
			std::cout	<< "Intern creates " << form->getName()
						<< " for " << target << std::endl;
			return form;
		}
	}
	throw AForm::FormDoesNotExistException();
	return NULL;
}
