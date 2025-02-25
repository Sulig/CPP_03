/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:35:57 by sadoming          #+#    #+#             */
/*   Updated: 2025/02/25 17:52:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"

/* Constructor & destructor */
ClapTrap::ClapTrap(void)
{
	std::cout << "Claptrap default constructor called" << std::endl;
	this->_name = "Claptrap";
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Claptrap constructor called" << std::endl;
	this->_name = name;
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}
ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Claptrap copy constructor called" << std::endl;
	*this = src;
	return ;
}
ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Claptrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}
ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called" << std::endl;
	return ;
}
/* ----- */

/* Actions */
void ClapTrap::attack(std::string const & target)
{
	if (_hitpoints == 0)
	{
		std::cout << MAGENTA << "";
		std::cout << this->_type << this->_name << " is dead!" << std::endl;
		std::cout << RESET << "";
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << YELLOW << "";
		std::cout << this->_type << this->_name << " is out of energy points!" << std::endl;
		std::cout << RESET << "";
		return ;
	}
	else
	{
		_energyPoints -= 1;
		std::cout << CYAN << "";
		std::cout << this->_type << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		std::cout << RESET << "";
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints == 0)
	{
		std::cout << MAGENTA << "";
		std::cout << this->_type << this->_name << " is already dead!" << std::endl;
		std::cout << RESET << "";
		return ;
	}
	else
	{
		if ((int)amount >= _hitpoints)
			_hitpoints = 0;
		else
			_hitpoints -= amount;
		std::cout << RED << "";
		std::cout << this->_type << this->_name << " takes " << amount << " points of damage!" << std::endl;
		if (_hitpoints == 0)
			std::cout << "\033[1;31m" << this->_type << this->_name << " died!" << std::endl;
		std::cout << RESET << "";
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitpoints == 0)
	{
		std::cout << MAGENTA << "";
		std::cout << this->_type << this->_name << " is dead!" << std::endl;
		std::cout << RESET << "";
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << YELLOW << "";
		std::cout << this->_type << this->_name << " is out of energy points!" << std::endl;
		std::cout << RESET << "";
		return ;
	}
	else
	{
		_hitpoints += amount;
		_energyPoints -= 1;
		std::cout << GREEN << "";
		std::cout << this->_type << this->_name << " is repaired for " << amount << " hitpoints!" << std::endl;
		std::cout << RESET << "";
	}
}
/* ----- */
