/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 12:57:59 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 13:17:13 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
	PlasmaRifle(const PlasmaRifle &rhs);
public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle	&operator=(PlasmaRifle const &rhs);

	void attack() const;
};

#endif
