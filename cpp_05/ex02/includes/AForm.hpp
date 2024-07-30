/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:54:59 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/30 16:20:26 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		AForm();
		AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
		AForm(const AForm &copy);
		~AForm();
		AForm& operator=(const AForm &form);

		const std::string	getName() const;
		bool				getSigned() const;
		unsigned int		getGradeToSign() const;
		unsigned int		getGradeToExecute() const;


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
