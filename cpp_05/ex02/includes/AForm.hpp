/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:54:59 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/02 11:31:21 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

#define ORANGE "\033[38;5;208m"
#define RED "\033[38;5;196m"
#define TEAL "\033[38;5;49m"
#define PURPLE "\033[38;5;129m"
#define OLIVE "\033[38;5;58m"
#define GREEN "\033[38;5;46m"
#define RESET "\033[0m"

class Bureaucrat;

class AForm {

	private:
		const std::string _name;
		bool			_signed;
		const size_t	_gradeToSign;
		const size_t	_gradeToExecute;
	public:
		AForm();
		AForm(const std::string name, const size_t gradeToSign, const size_t gradeToExecute);
		AForm(const AForm &copy);
		~AForm();
		AForm& operator=(const AForm &form);

		const std::string	getName() const;
		bool				getSigned() const;
		size_t				getGradeToSign() const;
		size_t				getGradeToExecute() const;


		void			beSigned(Bureaucrat &bureaucrat);
		void			execute(Bureaucrat const &executor) const;
		virtual void	action(Bureaucrat const &executor) const = 0;


		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};
std::ostream& operator<<(std::ostream &out, const AForm &form);
