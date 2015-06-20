/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 13:26:54 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 14:20:49 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() : hp(0), type("")
{
}

Enemy::Enemy(Enemy const &rhs) : hp(rhs.hp), type(rhs.type)
{
}

Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type)
{
}

Enemy::~Enemy()
{
}

Enemy		&Enemy::operator=(Enemy const &rhs)
{
	this->hp = rhs.hp;
	this->type = rhs.type;
	return (*this);
}

std::string const	Enemy::getType() const
{
	return type;
}

int			Enemy::getHP() const
{
	return hp;
}

void		Enemy::takeDamage(int dmg)
{
	if (hp - dmg < 0)
		hp = 0;
	else
		hp -= dmg;
}
