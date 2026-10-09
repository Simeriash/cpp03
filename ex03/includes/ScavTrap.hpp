/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:45:09 by julauren          #+#    #+#             */
/*   Updated: 2026/10/09 12:47:41 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define B_CYAN "\033[96m"
#define B_YELLOW "\033[93m"
#define RESET "\033[39m"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &cpy);
		~ScavTrap(void);

		ScavTrap &operator=(ScavTrap const &rhs);

		void attack(const std::string &target);

		void guardGate(void);
};

#endif
