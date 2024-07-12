/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:57:49 by anthony           #+#    #+#             */
/*   Updated: 2024/07/12 12:53:57 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"

Contact::Contact() 
: _phone_number(""), _first_name(""),
_last_name(""), _nickname(""),
 _secret(""), _index(0) { };

Contact::~Contact(){
};

///////setTER
void	Contact::setIndex(int index) {
	_index = index;
}

void	Contact::setFirstName(std::string line){
	_first_name = line;
}

void	Contact::setLastName(std::string line) {
	_last_name = line;
}

void	Contact::setNickname(std::string line) {
	_nickname = line;
}

void	Contact::setPhoneNumber(std::string line) {
	_phone_number = line;
}

void	Contact::setSecret(std::string line) {
	_secret = line;
}

///////GETTER
int	Contact::getIndex() const {
	return _index;
}

std::string	Contact::getFirstName() const{
	return _first_name;
}

std::string	Contact::getLastName() const {
	return _last_name;
}

std::string	Contact::getNickname() const {
	return _nickname;
}

std::string	Contact::getPhoneNumber() const {
	return _phone_number;
}

std::string	Contact::getSecret() const {
	return _secret;
}
