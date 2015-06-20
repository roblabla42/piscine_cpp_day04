/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 00:53:56 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/15 18:28:10 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim("")
{
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src) : Victim(src)
{
	*this = src;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon		&Peon::operator=(Peon const &rhs)
{
	Victim::operator=(rhs);
	return (*this);
}

void		Peon::getPolymorphed() const
{
	std::cout	<< getName() << " has been turned into a pink pony !"
				<< std::endl;
}
