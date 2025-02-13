/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:30:59 by sadoming          #+#    #+#             */
/*   Updated: 2025/02/13 18:59:33 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Constructor & destructor */
DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_type = "DiamondTrap ";
	this->_name = "Diamondtrap";
	ClapTrap::_name = this->_name + SUFFIX;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	return ;
}
DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_type = "DiamondTrap ";
	this->_name = name;
	ClapTrap::_name = this->_name + SUFFIX;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	return ;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}
DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}
/* ----- */

/* Actions */
void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI(void)
{
	std::cout << COLOR << "";
	std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
	std::cout << RESET << "";
}
/* ----- */
