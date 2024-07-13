/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:40:51 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 11:17:14 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef REPLACER_HPP
# define REPLACER_HPP

#include <string.h>
#include <cstdlib>
#include <fstream>
#include <iostream> 

std::string	replacer(std::string line, std::string replace, std::string search); 
void		error_msg(std::string move, std::string filename);
	
# endif