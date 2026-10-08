/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:56:09 by julauren          #+#    #+#             */
/*   Updated: 2026/10/08 17:03:02 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout << GREEN "DiamondTrap " << _name << " was created." RESET << std::endl;
	std::cout << "hitpoint: " << _hitPoints << "	energypoint: " << _energyPoints << "	attackdamage: " << _attackDamage << std::endl;

	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy) : ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy), _name(cpy._name)
{
	std::cout << GREEN "DiamondTrap " << _name << "  copy was created." RESET << std::endl;
	return;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << RED "DiamondTrap " << _name << " was destructed." RESET << std::endl;
	return;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	_name = rhs._name;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << B_CYAN "I am " << _name << std::endl;
    std::cout << "My ClapTrap name is " << ClapTrap::_name << RESET << std::endl;
}
