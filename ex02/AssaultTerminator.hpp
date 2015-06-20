/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:54:30 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 17:05:34 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AssaultTerminator_HPP
# define AssaultTerminator_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & src);
	virtual ~AssaultTerminator();

	AssaultTerminator		&operator=(AssaultTerminator const &rhs);

	ISpaceMarine		*clone() const;
	void				battleCry() const;
	void				rangedAttack() const;
	void				meleeAttack() const;
};

#endif
