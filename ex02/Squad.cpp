/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:16:29 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/20 17:07:45 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Squad.hpp"
#include <iostream>

Squad::Squad() : marines(new ISpaceMarine*[64]), count(0), arrLen(64)
{
}

Squad::Squad(Squad const &src) : marines(new ISpaceMarine*[src.getCount()]), arrLen(src.getCount())
{
	int i = 0;
	while (i < src.getCount())
		marines[i] = src.getUnit(i)->clone();
}

Squad::~Squad()
{
	int i = 0;
	while (i < this->count)
		delete marines[i++];
	delete[] marines;
}

Squad	&Squad::operator=(Squad const &rhs)
{
	int i = 0;
	while (i < this->count)
		delete marines[i];
	this->count = 0;
	i = 0;
	while (i < rhs.count)
		this->push(rhs.getUnit(i));
	return (*this);
}

int				Squad::getCount() const
{
	return (count);
}

ISpaceMarine	*Squad::getUnit(int unit) const
{
	if (unit < count)
		return (marines[unit]);
	else
		return (NULL);
}

int				Squad::push(ISpaceMarine *marine)
{
	ISpaceMarine	**newArr;

	if (count < arrLen)
		marines[count++] = marine;
	else
	{
		newArr = new ISpaceMarine*[++arrLen];
		int i = 0;
		while (i < arrLen - 1)
		{
			newArr[i] = marines[i];
			i++;
		}
		newArr[count++] = marine;
		delete[] marines;
		marines = newArr;
	}
	return (count);
}
