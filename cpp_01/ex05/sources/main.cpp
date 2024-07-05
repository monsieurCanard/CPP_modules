/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:33:44 by anthony           #+#    #+#             */
/*   Updated: 2024/07/05 18:22:52 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <unistd.h>

int main(int ac, char **av) {

	Harl	harl;
	std::string	level;

	if (ac != 2)
		return (1);
	level = av[1];
	harl.complain(level);
}