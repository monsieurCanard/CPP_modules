/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:24:36 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 07:48:44 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default form"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
	: _name(name), _signed(false),
	_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
		if (gradeToSign < 1 || gradeToExecute < 1)
			throw Form::GradeTooHighException();
		else if (gradeToSign > 150 || gradeToExecute > 150)
			throw Form::GradeTooLowException();
	}

Form::~Form() {}

Form::Form(const Form &copy)
	: _name(copy.getName()), _signed(copy.getSigned()) , _gradeToSign(copy.getGradeToSign()),
	_gradeToExecute(copy.getGradeToExecute()) {
		*this = copy;
}

Form& Form::operator=(const Form &form) {
	if (this == &form)
		return *this;
	_signed = form.getSigned();
	return *this;
}

const std::string Form::getName() const {
	return _name;
}

bool Form::getSigned() const {
	return _signed;
}

unsigned int Form::getGradeToSign() const {
	return _gradeToSign;
}

unsigned int Form::getGradeToExecute() const {
	return _gradeToExecute;
}

void	Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > static_cast<unsigned int>(_gradeToSign))
		throw Form::GradeTooLowException();
	else {
		std::cout << TEAL << bureaucrat.getName() << GREEN << " signs " << TEAL << _name << RESET << std::endl;
		_signed = true;
	}
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream &out, const Form &form) {
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