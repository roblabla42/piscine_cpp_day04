/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 15:18:21 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 17:05:52 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
	ISpaceMarine	**marines;
	int				count;
	int				arrLen;
public:
	Squad();
	Squad(Squad const & src);
	virtual ~Squad();

	Squad			&operator=(Squad const &rhs);
	int				getCount() const;
	ISpaceMarine	*getUnit(int) const;
	int				push(ISpaceMarine*);
};

#endif
