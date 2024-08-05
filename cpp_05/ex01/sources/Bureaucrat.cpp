/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:21:41 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/05 14:55:59 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const name, size_t grade) : _name(name) {
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

size_t Bureaucrat::getGrade() const {
	return this->_grade;
}

std::string const Bureaucrat::getName() const {
	return this->_name;
}

void	Bureaucrat::setGrade(size_t grade) {
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

void	Bureaucrat::signForm(Form &form) {
	if (this->_grade > form.getGradeToSign())
		std::cout << TEAL << this->_name << RED << " cannot signs " << TEAL << form.getName() << RED << " because his grade is too low" << std::endl;
	else if  (form.getSigned())
		std::cout << TEAL << this->_name << RED << " cannot signs " << TEAL << form.getName() << RED << " because the form is already signed" << std::endl;
	else {
		form.beSigned(*this);
	}
	std::cout << RESET;
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