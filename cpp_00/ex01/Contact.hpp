/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:17:55 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/06/14 18:10:56 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	
	public:
		Contact();
		~Contact();
		int		GetIndex();
		// void	SetContact(const int index);
		void	SetFirstName(const char *line);
		void	SetLastName(const char *line);
		void	SetNickname(const char *line);
		void	SetPhoneNumber(const char *line);
		void	SetSecret(const char *line);
		char	*GetFirstName();
		char	*GetLastName();
		char	*GetNickname();
		char	*GetPhoneNumber();
		char	*GetSecret();

	private:
		int		index;
		char	*first_name;
		char	*last_name;
		char	*nickname;
		char	*phone_number;
		char	*secret;
};

#endif