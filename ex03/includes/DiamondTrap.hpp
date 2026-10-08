/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:29:15 by julauren          #+#    #+#             */
/*   Updated: 2026/10/08 16:15:44 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define B_CYAN "\033[96m"
#define RESET "\033[39m"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &cpy);
		~DiamondTrap(void);
		DiamondTrap &operator=(DiamondTrap const &rhs);

		using ScavTrap::attack;
		void whoAmI(void);

	private:
		std::string _name;
};

#endif
