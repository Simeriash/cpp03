/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:24:19 by julauren          #+#    #+#             */
/*   Updated: 2026/10/08 12:32:44 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN << _name << " was created." RESET << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
	*this = cpy;

	std::cout << GREEN << cpy._name << " was copied." RESET << std::endl;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << RED << _name << " was destructed." RESET << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	if(this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if(_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << B_YELLOW << _name << " can't attack." RESET << std::endl;
		return;
	}

	_energyPoints--;

	std::cout << B_CYAN << _name << " attacks " << target << ", causing " << _attackDamage << " points of damages." RESET << std::endl;

	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;

	if(_hitPoints < 0)
		_hitPoints = 0;

	std::cout << B_MAGENTA << _name << " takes " << amount << " damages." RESET << std::endl;

	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << B_YELLOW << _name << " can't repaired." RESET << std::endl;
		return;
	}

	_energyPoints--;

	_hitPoints += amount;

	std::cout << B_CYAN << _name << " repairs " << amount << " HP." RESET << std::endl;

	return;
}
