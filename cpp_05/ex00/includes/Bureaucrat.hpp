/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:16:49 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/02 12:24:57 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

#define ORANGE "\033[38;5;208m"
#define RED "\033[38;5;196m"
#define TEAL "\033[38;5;49m"
#define PURPLE "\033[38;5;129m"
#define OLIVE "\033[38;5;58m"
#define RESET "\033[0m"

/**
 * ! Why use exceptions?
 * 
 * Les exceptions permettent de separer le code de gestion d'erreur du code de traitement normal.
 * Permet de gerer les erreurs de maniere centralisee.
 * ! Garantie le nettoyage des ressources.
 */



class Bureaucrat {
	private :
		std::string const	_name;
		size_t				_grade;
		void				setGrade(size_t grade);

	public :
		Bureaucrat();
		Bureaucrat(std::string const name, size_t grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string const	getName() const;
		size_t				getGrade() const;

		void				incrementGrade();
		void				decrementGrade();

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

#endif