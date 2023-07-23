/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:28:56 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 09:22:41 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell :: ASpell()
{
    
}


ASpell :: ASpell(const ASpell & obj)
{
    *this = obj;
}

ASpell &  ASpell :: operator=(const ASpell & obj)
{
    this->name = obj.name;
    this->effects = obj.effects;
    return (*this);
}

ASpell :: ASpell(const std::string &vn, const std::string & ve)
{
    this->name = vn;
    this->effects = ve;
}

ASpell :: ~ASpell()
{
    
}

std::string const & ASpell :: getName() const{
    return name;
}

std::string const & ASpell :: getEffects() const{
    return effects;
}


void  ASpell ::  launch(const ATarget & obj)const
{
    obj.getHitBySpell(*this);
}