/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 13:03:40 by julauren          #+#    #+#             */
/*   Updated: 2026/10/08 13:33:36 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << GREEN "ScavTrap " << _name << " was created." RESET << std::endl;

	return;
}

ScavTrap::ScavTrap(ScavTrap const &cpy) : ClapTrap(cpy)
{
	std::cout << GREEN "ScavTrap " << _name << " copy was created." RESET << std::endl;

	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << RED "ScavTrap " << _name << " was destructed." RESET << std::endl;

	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if(_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << B_YELLOW "ScavTrap " << _name << " can't attack." RESET << std::endl;
		return;
	}

	_energyPoints--;

	std::cout << B_CYAN "ScapTrav " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damages." RESET << std::endl;

	return;
}

void ScavTrap::guardGate(void)
{
	std::cout << GREEN "ScavTrap " << _name << " is now in Gate keeper mode." RESET << std::endl;

	return;
}
