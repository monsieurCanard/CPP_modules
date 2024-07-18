/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:57:49 by anthony           #+#    #+#             */
/*   Updated: 2024/07/18 09:31:46 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"

Contact::Contact() 
: _phone_number(""), _first_name(""),
  _last_name(""), _nickname(""),
  _secret(""), _index(0) {
	std::cout << "Constructor Contact called" << std::endl;
 }

Contact::~Contact(){
	std::cout << "Destructor Contact called" << std::endl;
};

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
