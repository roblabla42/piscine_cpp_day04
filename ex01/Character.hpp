/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 14:11:00 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 14:25:55 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int			ap;
	AWeapon		*weapon;

	Character();

public:
	Character(std::string const &name);
	Character(Character const & src);
	virtual ~Character();

	Character		&operator=(Character const &rhs);

	void				recoverAP();
	void				equip(AWeapon*);
	void				attack(Enemy*);
	std::string const	getName() const;
	int					getAP() const;
	const AWeapon		*getWeapon() const;
};

std::ostream	&operator<<(std::ostream &lhs, Character const &rhs);

#endif
