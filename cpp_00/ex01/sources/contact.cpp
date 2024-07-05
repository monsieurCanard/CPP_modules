/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:57:49 by anthony           #+#    #+#             */
/*   Updated: 2024/07/04 16:30:46 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"

Contact::Contact(){
};

Contact::~Contact(){
};

void	Contact::SetIndex(int index) {
	this->index = index;
}

void	Contact::SetFirstName(std::string line){
	
	this->first_name = line;
}

void	Contact::SetLastName(std::string line) {
	
	this->last_name = line;
}

void	Contact::SetNickname(std::string line) {
	this->nickname = line;
}

void	Contact::SetPhoneNumber(std::string line) {
	this->phone_number = line;
}

void	Contact::SetSecret(std::string line)
{
	this->secret = line;

}

int	Contact::GetIndex() const {
	return this->index;
}

std::string	Contact::GetFirstName() const{
	return this->first_name;
}

std::string	Contact::GetLastName() const {
	return this->last_name;
}

std::string	Contact::GetNickname() const {
	return this->nickname;
}

std::string	Contact::GetPhoneNumber() const {
	return this->phone_number;
}

std::string	Contact::GetSecret() const {
	return this->secret;
}
