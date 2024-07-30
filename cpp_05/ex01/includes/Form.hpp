/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:54:59 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/30 14:25:37 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExecute);
		Form(const Form &copy);
		~Form();
		Form& operator=(const Form &form);

		const std::string getName() const;
		bool getSigned() const;
		unsigned int getGradeToSign() const;
		unsigned int getGradeToExecute() const;


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

