/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:24:36 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/30 16:23:12 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default aform"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute)
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

unsigned int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

unsigned int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > static_cast<unsigned int>(_gradeToSign))
		throw AForm::GradeTooLowException();
	else {
		std::cout << bureaucrat.getName() << " signs " << _name << std::endl;
		_signed = true;
	}
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed";
}


std::ostream& operator<<(std::ostream &out, const AForm &form) {
	out << "Form " << form.getName() << " is ";
	if (form.getSigned())
		out << "signed";
	else
		out << "not signed";
	out << " and requires a grade " << form.getGradeToSign() << " to be signed and a grade " << form.getGradeToExecute() << " to be executed";
	return out;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (_signed == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > static_cast<unsigned int>(_gradeToExecute))
		throw AForm::GradeTooLowException();
	else
		action(executor);
}