/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:08:03 by sadoming          #+#    #+#             */
/*   Updated: 2025/02/25 17:40:55 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/FragTrap.hpp"

/* Constructor & destructor */
FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Fragtrap constructor called" << std::endl;
	this->_type = "FragTrap ";
	this->_name = "Fragtrap";
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Fragtrap constructor called" << std::endl;
	this->_type = "FragTrap ";
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}
FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "Fragtrap copy constructor called" << std::endl;
	*this = src;
	return ;
}
FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "Fragtrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}
FragTrap::~FragTrap()
{
	std::cout << "Fragtrap destructor called" << std::endl;
	return ;
}
/* ----- */

/* Actions */
void	FragTrap::attack(std::string const & target)
{
	if (_hitpoints == 0)
	{
		std::cout << B_MAGENTA << "";
		std::cout << this->_type << this->_name << " is dead!" << std::endl;
		std::cout << RESET << "";
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << B_YELLOW << "";
		std::cout << this->_type << this->_name << " is out of energy points!" << std::endl;
		std::cout << RESET << "";
		return ;
	}
	else
	{
		_energyPoints -= 1;
		std::cout << B_CYAN << "";
		std::cout << this->_type << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		std::cout << RESET << "";
	}
}

void	FragTrap::highFivesGuys(void)
{
	if (_hitpoints == 0)
	{
		std::cout << B_MAGENTA << "";
		std::cout << this->_type << this->_name << " is dead!" << std::endl;
		std::cout << RESET << "";
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << B_YELLOW << "";
		std::cout << this->_type << this->_name << " is out of energy points!" << std::endl;
		std::cout << RESET << "";
		return ;
	}
	else
	{
		_energyPoints -= 1;
		std::cout << B_GREEN << "";
		std::cout << this->_type << this->_name << " high-fives guys!" << std::endl;
		std::cout << RESET << "";
	}
}
/* ----- */
