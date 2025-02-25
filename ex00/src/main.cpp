/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:35:41 by sadoming          #+#    #+#             */
/*   Updated: 2025/02/25 16:35:22 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("Claptrap");
	ClapTrap claptrap2(claptrap); // Copy constructor
	ClapTrap claptrap3 = claptrap; // Copy asignation operator

	claptrap.attack("Bandit");
	// On real case, the damage will get the target and it would inflict damage itself
	claptrap.takeDamage(5);
	claptrap.beRepaired(10);

	// Agote the claptrap
	for (int i = 0; i < 10; i++) {
		claptrap.attack("Mouseering");
		claptrap.takeDamage(1);
		claptrap.beRepaired(1);
	}

	// Kill the claptrap
	claptrap.takeDamage(10);

	// Try to repair the claptrap
	claptrap.beRepaired(10);
	return 0;
}
