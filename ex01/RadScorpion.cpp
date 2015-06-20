/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 13:39:15 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 14:34:58 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}

void		RadScorpion::takeDamage(int dmg)
{
	if (getHP() <= 0)
		return;
	Enemy::takeDamage(dmg);
	if (getHP() <= 0)
		std::cout << "* SPROTCH *" << std::endl;
}
