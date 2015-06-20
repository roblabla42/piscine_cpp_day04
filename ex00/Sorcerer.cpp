/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 20:28:04 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/15 19:14:17 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : name(""), title("")
{
}

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
}

Sorcerer::~Sorcerer()
{
	std::cout	<< name << ", " << title << ", is dead. Consequences will never"
				<< " be the same !" << std::endl;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;
	return (*this);
}

std::string	Sorcerer::getName() const
{
	return (name);
}

std::string	Sorcerer::getTitle() const
{
	return (title);
}


void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream& operator<< (std::ostream& stream, const Sorcerer &sorcerer)
{
	stream	<< "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
			<< ", and I like ponies !" << std::endl;
	return (stream);
}
