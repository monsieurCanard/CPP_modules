/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:31:08 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/30 16:18:38 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm(copy), _target(copy._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &robotomyRequestForm) {
	if (this != &robotomyRequestForm)
		AForm::operator=(robotomyRequestForm);
	return *this;
}

void RobotomyRequestForm::action(Bureaucrat const &executor) const
{
	(void)executor;
	std::cout << "Drilling noises... Brrrrr....\n";

	std::srand(std::time(0));

	if (std::rand() % 2)
	{
		std::cout << _target << " has been robotomized successfully.\n";
	}
	else
	{
		std::cout << "The robotomy on " << _target << " failed.\n";
	}
}