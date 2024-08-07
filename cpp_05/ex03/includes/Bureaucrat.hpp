/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:16:49 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/02 12:09:36 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <exception>

#define ORANGE "\033[38;5;208m"
#define RED "\033[38;5;196m"
#define TEAL "\033[38;5;49m"
#define PURPLE "\033[38;5;129m"
#define OLIVE "\033[38;5;58m"
#define RESET "\033[0m"

class AForm;

class Bureaucrat {
	private :
		std::string const	_name;
		size_t				_grade;

	public :
		Bureaucrat();
		Bureaucrat(std::string const name, size_t grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string const	getName() const;
		size_t				getGrade() const;
		void				setGrade(size_t grade);

		void				incrementGrade();
		void				decrementGrade();

		void				signForm(AForm &form);
		void				executeForm(AForm const &form) const;

		class GradeTooHighException : public std::exception {
			public :
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);
