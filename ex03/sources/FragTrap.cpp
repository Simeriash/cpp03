/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:03:51 by julauren          #+#    #+#             */
/*   Updated: 2026/10/08 14:16:35 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << GREEN "FragTrap " << _name << " was created." RESET << std::endl;

	return;
}

FragTrap::FragTrap(FragTrap const &cpy) : ClapTrap(cpy)
{
	std::cout << GREEN "FragTrap " << _name << " copy was created." RESET << std::endl;

	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << RED "FragTrap " << _name << " was destructed." RESET << std::endl;
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << B_CYAN "FragTrap " << _name << " request a hive five." RESET << std::endl;
	return;
}
