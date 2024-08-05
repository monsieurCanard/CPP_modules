/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:39:30 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/05 13:26:16 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

int main(void)
{
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl
	<< std::endl << "And we swap them" << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << max(a, b) << std::endl;

	std::cout << std::endl << "Now we do the same with strings" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	std::cout << "c = " << c << ", d = " << d << std::endl
			  << std::endl << "And we swap them" << std::endl;
	
	swap(c, d);
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}
