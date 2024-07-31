/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:21:41 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 08:17:31 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : _name(name) {
	std::cout << PURPLE << "Bureaucrat contructor called" << RESET << std::endl;
	this->setGrade(grade);
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name), _grade(copy._grade) {
	*this = copy;
}

Bureaucrat::~Bureaucrat() {
	std::cout << RED << "Bureaucrat destructor called" << RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat) {
	if (this != &bureaucrat) {
		this->_grade = bureaucrat._grade;
	}
	return *this;
}

unsigned int Bureaucrat::getGrade() const {
	return this->_grade;
}

std::string const Bureaucrat::getName() const {
	return this->_name;
}

void	Bureaucrat::setGrade(unsigned int grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

void Bureaucrat::incrementGrade() {
	this->setGrade(this->_grade - 1);
}

void Bureaucrat::decrementGrade() {
	this->setGrade(this->_grade + 1);
}

void	Bureaucrat::signForm(AForm &form) {
	if (this->_grade > form.getGradeToSign())
		std::cout << this->_name << " cannot sign " << form.getName() << " because his grade is too low" << std::endl;
	else if  (form.getSigned())
		std::cout << this->_name << " cannot sign " << form.getName() << " because the form is already signed" << std::endl;
	else {
		form.beSigned(*this);
	}
}

void	Bureaucrat::executeForm(AForm const &form) const {
	form.execute(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
	out << TEAL << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << RESET << std::endl;
	return out;
}

const char *Bureaucrat::GradeTooHighException::GradeTooHighException::what(void) const throw() {
	return "\033[1;40mGrade is too high\033[0m";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return "\033[1;31mGrade is too low\033[0m";
}