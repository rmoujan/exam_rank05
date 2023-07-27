/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:28:56 by reshe             #+#    #+#             */
/*   Updated: 2023/07/27 12:34:48 by rmoujan          ###   ########.fr       */
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
  //  std::cout <<"first 1 "<<std::endl;
    obj.getHitBySpell(*this);
  //  std::cout <<"second 2"<<std::endl;
}