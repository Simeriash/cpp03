/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:22:01 by julauren          #+#    #+#             */
/*   Updated: 2026/10/08 16:29:28 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

int main(void)
{
	DiamondTrap bob("Bob");

	bob.whoAmI();
	bob.attack("Enemy");
	bob.guardGate();
	bob.highFivesGuys();

	return (0);
}
