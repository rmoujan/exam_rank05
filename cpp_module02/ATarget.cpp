/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:14:26 by reshe             #+#    #+#             */
/*   Updated: 2023/07/27 12:35:06 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget :: ATarget()
{
    
}


ATarget :: ATarget(const ATarget & obj)
{
    this->type = obj.type;
}

ATarget &  ATarget :: operator=(const ATarget & obj)
{
    this->type = obj.type;
    return (*this);
}

ATarget :: ATarget(const std::string &vt)
{
    this->type = vt;
}

ATarget :: ~ATarget()
{
    
}

 std::string const & ATarget :: getType() const{
    return type;
}

void ATarget :: getHitBySpell(ASpell const & obj)const
{
   // std::cout <<"IN GITHITBYSPELL after "<<obj.getName()<<std::endl;
     std::cout <<this->type<<" has been "<<obj.getEffects()<<"!"<<std::endl;
  //  std::cout <<"IN GITHITBYSPELL before "<<obj.getEffects()<<std::endl;
   // std::cout <<"TYPE is "<<this->getType()<<std::endl;
}