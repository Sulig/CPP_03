/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 19:48:02 by sadoming          #+#    #+#             */
/*   Updated: 2025/02/25 17:39:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "inc/ScavTrap.hpp"

/* Constructor & destructor */
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Scavtrap constructor called" << std::endl;
	this->_type = "ScavTrap ";
	this->_name = "Scavtrap";
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_isGuardGate = false;
	return ;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Scavtrap constructor called" << std::endl;
	this->_type = "ScavTrap ";
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_isGuardGate = false;
	return ;
}
ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "Scavtrap copy constructor called" << std::endl;
	*this = src;
	return ;
}
ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Scavtrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}
ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap destructor called" << std::endl;
	return ;
}
/* ----- */

/* Actions */
void	ScavTrap::attack(std::string const & target)
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

void	ScavTrap::guardGate(void)
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
		if (_isGuardGate == true)
		{
			std::cout << B_WHITE << "";
			std::cout << this->_type << this->_name << " has exited Gate keeper mode!" << std::endl;
			std::cout << RESET << "";
			_isGuardGate = false;
		}
		else
		{
			_energyPoints -= 1;
			std::cout << B_WHITE << "";
			std::cout << this->_type << this->_name << " has entered in Gate keeper mode!" << std::endl;
			std::cout << RESET << "";
			_isGuardGate = true;
		}
	}
}
/* ----- */
