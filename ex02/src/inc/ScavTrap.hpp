/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 19:48:19 by sadoming          #+#    #+#             */
/*   Updated: 2025/02/25 17:39:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define B_RED		"\033[1;31m"
# define B_GREEN	"\033[1;32m"
# define B_YELLOW	"\033[1;33m"
# define B_BLUE		"\033[1;34m"
# define B_MAGENTA	"\033[1;35m"
# define B_CYAN		"\033[1;36m"
# define B_WHITE	"\033[1;37m"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		ScavTrap	&operator=(ScavTrap const &rhs);
		~ScavTrap();

		void	attack(std::string const &target);
		void	guardGate(void);

	private:
		bool	_isGuardGate;
};

#endif
