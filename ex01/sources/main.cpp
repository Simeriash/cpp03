/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:22:01 by julauren          #+#    #+#             */
/*   Updated: 2026/10/08 13:41:31 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main(void)
{
	ScavTrap bob("Bob");

	bob.attack("Enemy");
	bob.takeDamage(5);
	bob.beRepaired(2);
	bob.guardGate();
	return 0;
}
