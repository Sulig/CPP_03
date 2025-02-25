/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:35:41 by sadoming          #+#    #+#             */
/*   Updated: 2025/02/25 17:35:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"
#include "inc/ScavTrap.hpp"

void	clapTrapTests()
{
	/* ClapTrap */
	std::cout << RESET;
	std::cout << "----------- ClapTrap -------------" << std::endl;
	// Create a claptrap
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
	/*--------------*/
	std::cout << "----------- ClapTrap End -------------" << std::endl;
	std::cout << RESET << std::endl;
}

void	scavTrapTests()
{
	/* ScavTrap */
	std::cout << "----------- ScavTrap -------------" << std::endl;
	// Create a scavtrap
	ScavTrap	scavtrap("Scavtrap");
	ScavTrap	scavtrap2(scavtrap); // Copy constructor
	ScavTrap	scavtrap3 = scavtrap; // Copy asignation operator

	scavtrap.attack("Bandit");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(10);
	scavtrap.guardGate();
	scavtrap.guardGate();

	// Agote the scavtrap
	for (int i = 0; i < 10; i++) {
		scavtrap.attack("Mouseering");
		scavtrap.takeDamage(1);
		scavtrap.beRepaired(1);
	}

	// Kill the scavtrap
	scavtrap.takeDamage(1000);

	// Try to repair the scavtrap
	scavtrap.beRepaired(10);
	/*--------------*/
	std::cout << "----------- ScavTrap End -------------" << std::endl;
	std::cout << RESET << std::endl;
}

int main()
{
	clapTrapTests();
	scavTrapTests();
	return 0;
}
