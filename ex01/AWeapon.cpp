/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 12:53:32 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 12:57:43 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() : name(""), dmg(0), apcost(0)
{
}

AWeapon::AWeapon(AWeapon const &rhs) : name(rhs.name), dmg(rhs.dmg),
	apcost(rhs.apcost)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int dmg) :
	name(name), dmg(dmg), apcost(apcost)
{
}

AWeapon::~AWeapon()
{
}

AWeapon		&AWeapon::operator=(AWeapon const &rhs)
{
	this->name = rhs.name;
	this->dmg = rhs.dmg;
	this->apcost = rhs.apcost;
	return (*this);
}

std::string	AWeapon::getName() const
{
	return (name);
}

int			AWeapon::getAPCost() const
{
	return (apcost);
}

int			AWeapon::getDamage() const
{
	return (dmg);
}
