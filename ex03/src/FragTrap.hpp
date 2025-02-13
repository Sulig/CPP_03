/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:08:27 by sadoming          #+#    #+#             */
/*   Updated: 2025/02/13 17:33:50 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define B_RED		"\033[1;31m"
# define B_GREEN	"\033[1;32m"
# define B_YELLOW	"\033[1;33m"
# define B_BLUE		"\033[1;34m"
# define B_MAGENTA	"\033[1;35m"
# define B_CYAN		"\033[1;36m"
# define B_WHITE	"\033[1;37m"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		FragTrap	&operator=(FragTrap const &rhs);
		~FragTrap();

		void	attack(std::string const &target);
		void	highFivesGuys(void);
};

#endif
