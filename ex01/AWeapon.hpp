/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 19:14:43 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 13:12:05 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>

class AWeapon
{
private:
	std::string	name;
	int			dmg;
	int			apcost;

	AWeapon();
public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &rhs);
	AWeapon	&operator=(AWeapon const &rhs);

	virtual ~AWeapon();
	std::string virtual getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
