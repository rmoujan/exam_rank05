/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:14:26 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 09:40:22 by reshe            ###   ########.fr       */
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

void ATarget :: getHitBySpell( ASpell const & obj)const
{
    std::cout <<this->type<<" has been "<<obj.getEffects()<<"!"<<std::endl;
}