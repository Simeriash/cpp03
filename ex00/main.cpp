/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:22:01 by julauren          #+#    #+#             */
/*   Updated: 2026/10/08 14:18:03 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	{
		ClapTrap bob("Bob");

		bob.attack("Enemy");
		bob.takeDamage(5);
		bob.beRepaired(3);

		for (int i = 0; i < 12; i++)
			bob.attack("Enemy");
	}
	{
		ClapTrap bob("Bob");

		bob.attack("Enemy");
		bob.takeDamage(5);
		bob.beRepaired(3);
		bob.takeDamage(10);

		for (int i = 0; i < 5; i++)
			bob.attack("Enemy");
	}
	return (0);
}
