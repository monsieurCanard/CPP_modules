/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:37:58 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/02 12:20:05 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern		NEWBY;
	Bureaucrat	BENDER("Bender", 1);

	AForm *form1;
	AForm *form2;
	AForm *form3;
	AForm *form4;

	try
	{
		form1 = NEWBY.makeForm("robotomy request", "Bender");
		BENDER.signForm(*form1);
		BENDER.executeForm(*form1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		form2 = NEWBY.makeForm("presidential pardon", "Bender");
		BENDER.signForm(*form2);
		BENDER.executeForm(*form2);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		form3 = NEWBY.makeForm("shrubbalkwdjalkwjd", "Bender");
		BENDER.signForm(*form3);
		BENDER.executeForm(*form3);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		form4 = NEWBY.makeForm("shrubbery creation", "Bender");
		BENDER.signForm(*form4);
		BENDER.executeForm(*form4);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	delete form1;
	delete form2;
	delete form4;
}