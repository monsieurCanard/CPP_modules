/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:56:58 by anthony           #+#    #+#             */
/*   Updated: 2024/07/08 10:05:51 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_UTILS_HPP
# define PHONEBOOK_UTILS_HPP

#include "PhoneBook.hpp"

#include <stdlib.h>

void		DisplayLine(std::string line);
std::string	GetAnswer(std::string needed);
int			GetIndex();

#endif