/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:10:37 by julauren          #+#    #+#             */
/*   Updated: 2026/10/08 11:21:23 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const &cpy);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &rhs);

		ClapTrap(std::string name);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string _name;
		int _hit;
		int _energy;
		int _attack;
};

#endif
