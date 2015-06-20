/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 21:28:57 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/15 18:14:51 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	Peon();
public:
	Peon(std::string name);
	Peon(Peon const & src);
	virtual ~Peon();

	Peon		&operator=(Peon const &rhs);
	
	void getPolymorphed() const;
};

#endif
