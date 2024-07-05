/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:56:58 by anthony           #+#    #+#             */
/*   Updated: 2024/07/04 16:26:46 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_UTILS_HPP
# define PHONEBOOK_UTILS_HPP

#include "PhoneBook.hpp"

void		DisplayLine(std::string line);
std::string	GetAnswer(std::string needed);
int			GetIndex();

#endif