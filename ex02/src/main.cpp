/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:35:41 by sadoming          #+#    #+#             */
/*   Updated: 2025/02/12 19:21:25 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	/* ClapTrap */
	// Create a claptrap
	ClapTrap claptrap("Claptrap");

	// Test some actions
	claptrap.attack("Bandit");
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

	/* ScavTrap */
	// Create a scavtrap
	ScavTrap	scavtrap("Scavtrap");

	// Test some actions
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

	/* FragTrap */
	// Create a fragtrap
	FragTrap	fragtrap("Fragtrap");

	// Test some actions
	fragtrap.attack("Bandit");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(10);
	fragtrap.highFivesGuys();

	// Agote the fragtrap
	for (int i = 0; i < 10; i++) {
		fragtrap.attack("Mouseering");
		fragtrap.takeDamage(1);
		fragtrap.beRepaired(1);
	}

	// Kill the fragtrap
	fragtrap.takeDamage(1000);

	// Try to repair the fragtrap
	fragtrap.beRepaired(10);
	/*--------------*/
	return 0;
}
