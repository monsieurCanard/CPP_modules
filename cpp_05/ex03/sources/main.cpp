/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:37:58 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 08:46:16 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) {
	
	Intern NEWBY;

	AForm *form1 = NEWBY.makeForm("robotomy request", "Bender");
	std::cout << std::endl;

	AForm *form2 = NEWBY.makeForm("presidential pardon", "Bender");
	std::cout << std::endl;

	AForm *form3 = NEWBY.makeForm("shrubbery creation", "Bender");
	std::cout << std::endl;

	Bureaucrat BENDER("Bender", 1);

	BENDER.signForm(*form1);
	BENDER.executeForm(*form1);

	BENDER.signForm(*form2);
	BENDER.executeForm(*form2);

	BENDER.signForm(*form3);
	BENDER.executeForm(*form3);

	delete form1;
	delete form2;
	delete form3;
}