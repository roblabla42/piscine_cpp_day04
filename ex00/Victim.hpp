/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 21:23:08 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/15 17:43:32 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
	Victim();
	std::string	name;
public:
	Victim(std::string name);
	Victim(Victim const & src);
	virtual ~Victim();

	Victim		&operator=(Victim const &rhs);

	std::string	getName() const;

	virtual void getPolymorphed() const;
};

std::ostream& operator<< (std::ostream& stream, const Victim& victim);

#endif
