/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 13:17:24 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 13:18:50 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
	PowerFist(const PowerFist &rhs);
public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist	&operator=(PowerFist const &rhs);

	void attack() const;
};


#endif
