/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 13:32:51 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 13:36:12 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(src)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}

void		SuperMutant::takeDamage(int dmg)
{
	if (this->getHP() <= 0)
		return;

	dmg = dmg - 3 < 0 ? 0 : dmg - 3;
	Enemy::takeDamage(dmg);
	if (this->getHP() <= 0)
		std::cout << "Gaaah. Me want smash heads !" << std::endl;
}
