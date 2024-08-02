/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:54:59 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/02 09:56:52 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string	_name;
		bool				_signed;
		const size_t		_gradeToSign;
		const size_t		_gradeToExecute;
	public:
		Form();
		Form(const std::string name, const size_t gradeToSign, const size_t gradeToExecute);
		Form(const Form &copy);
		~Form();
		Form& operator=(const Form &form);

		const std::string	getName() const;
		bool				getSigned() const;
		size_t		getGradeToSign() const;
		size_t		getGradeToExecute() const;

		void beSigned(Bureaucrat &bureaucrat);
		
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};
std::ostream& operator<<(std::ostream &out, const Form &form);

