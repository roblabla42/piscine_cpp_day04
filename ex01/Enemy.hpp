/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 13:21:50 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 14:20:38 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>

class Enemy
{
private:
	int			hp;
	std::string	type;
	Enemy();

public:
	Enemy(Enemy const &rhs);
	Enemy(int hp, std::string const &type);
	virtual ~Enemy();
	Enemy	&operator=(Enemy const &rhs);

	std::string const	getType() const;
	int getHP() const;

	virtual void takeDamage(int);
};

#endif
