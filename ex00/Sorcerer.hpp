/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 20:23:33 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 21:28:30 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
	std::string	name;
	std::string	title;
	Sorcerer();
	
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	virtual ~Sorcerer();

	std::string	getName() const;
	std::string	getTitle() const;
	Sorcerer		&operator=(Sorcerer const &rhs);

	void			polymorph(Victim const &victim) const;
};

std::ostream& operator<< (std::ostream& stream, const Sorcerer& sorcerer);

#endif
