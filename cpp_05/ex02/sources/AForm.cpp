/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:24:36 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/02 11:47:22 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default aform"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

AForm::AForm(const std::string name, const size_t gradeToSign, const size_t gradeToExecute)
	: _name(name), _signed(false),
	  _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

	AForm::~AForm() {}

	AForm::AForm(const AForm &copy)
		: _name(copy.getName()), _signed(copy.getSigned()), _gradeToSign(copy.getGradeToSign()),
		  _gradeToExecute(copy.getGradeToExecute())
	{
		*this = copy;
}

AForm &AForm::operator=(const AForm &form)
{
	if (this == &form)
		return *this;
	_signed = form.getSigned();
	return *this;
}

const std::string AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

size_t AForm::getGradeToSign() const
{
	return _gradeToSign;
}

size_t AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

void	AForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	else {
		std::cout << TEAL << bureaucrat.getName() << GREEN << " signs " << TEAL << _name << RESET << std::endl;
		_signed = true;
	}
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "\033[1;31mGrade is too high\033[0m";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "\033[1;31mGrade is too low\033[0m";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "\033[1;31mForm isn't signed\033[0m";
}


std::ostream& operator<<(std::ostream &out, const AForm &form) {
	out		<< "Form :" << std::endl
			<< "name : " << TEAL << form.getName() << RESET << std::endl;
	std::cout << "Status : ";
	if (form.getSigned())
		out << GREEN << "signed";
	else
		out << RED << "not signed";
	std::cout << RESET << std::endl;
	out	<< "Requires grade to be signed : " << TEAL << form.getGradeToSign()
		<< RESET << std::endl
		<< "Requires grade to be executed : " << TEAL << form.getGradeToExecute();
	std::cout << std::endl;
	return out;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (_signed == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > _gradeToExecute)
		throw AForm::GradeTooLowException();
	else
		executor.executeForm(*this);
}