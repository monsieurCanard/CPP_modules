/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:57:49 by anthony           #+#    #+#             */
/*   Updated: 2024/06/14 19:22:58 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"

Contact::Contact(){
	this->first_name = NULL;
	this->last_name = NULL;
	this->nickname = NULL;
	this->phone_number = NULL;
	this->secret = NULL;
};

Contact::~Contact(){
	delete[] first_name;
	delete[] last_name;
	delete[] nickname;
	delete[] phone_number;
	delete[] secret;
};

void	Contact::SetFirstName(const char *line){
	
	this->first_name = new char[std::strlen(line) + 1];
	std::strcpy(this->first_name, line);
}

void	Contact::SetLastName(const char *line) {
	
	this->last_name = new char[std::strlen(line) + 1];
	std::strcpy(this->last_name, line);
}

void	Contact::SetNickname(const char *line) {
	this->nickname = new char[std::strlen(line) + 1];
	std::strcpy(this->nickname, line);
}

void	Contact::SetPhoneNumber(const char *line) {
	this->phone_number = new char[std::strlen(line) + 1];
	std::strcpy(this->phone_number, line);
}

void	Contact::SetSecret(const char *line)
{
	this->secret = new char[std::strlen(line) + 1];
	std::strcpy(this->secret, line);
}

char	*Contact::GetFirstName() {
	return this->first_name;
}

char	*Contact::GetLastName() {
	return this->last_name;
}

char	*Contact::GetNickname() {
	return this->nickname;
}

char	*Contact::GetPhoneNumber() {
	return this->phone_number;
}

char	*Contact::GetSecret() {
	return this->secret;
}

int		Contact::GetIndex(){
	return this->index;
};