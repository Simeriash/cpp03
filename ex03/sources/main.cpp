/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:22:01 by julauren          #+#    #+#             */
/*   Updated: 2026/10/09 12:50:00 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

int main(void)
{
	DiamondTrap bob("Bob");
	DiamondTrap marley(bob);

	bob.whoAmI();
	bob.attack("Enemy");
	bob.guardGate();
	bob.highFivesGuys();

	for (int i = 0; i < 60; i++)
		bob.attack("Enemy");

	marley.whoAmI();

	return (0);
}
