/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:29:32 by sadoming          #+#    #+#             */
/*   Updated: 2025/02/13 19:00:25 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

# define SUFFIX		"_clap_name"
# define COLOR		"\033[38;5;166m"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap	&operator=(DiamondTrap const &rhs);
		~DiamondTrap();

		void	attack(std::string const &target);
		void	whoAmI(void);

	private:
		std::string	_name;
};

#endif
