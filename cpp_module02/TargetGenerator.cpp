/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:20:02 by reshe             #+#    #+#             */
/*   Updated: 2023/07/24 22:30:24 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "TargetGenerator.hpp"

TargetGenerator :: TargetGenerator()
{
    

TargetGenerator :: TargetGenerator(const TargetGenerator & obj)
{
    *this = obj;
}

TargetGenerator &  TargetGenerator :: operator=(const TargetGenerator & obj)
{
    return (*this);
}

~TargetGenerator :: TargetGenerator()
{
     
}


void TargetGenerator ::  learnTargetType(ATarget* trg){
    this->targets.push_back(trg);
}

void  TargetGenerator :: forgetTargetType(std::string const &name)
{
    std::vector<ATarget*>::iterator it;
    for (it = this->targets.begin(); it != this->targets.end(); it++)
    {
        if (name == (*it)->getType())
        {
            this->targets.erase(it);
            return ;
        }
    }
}


ATarget*  TargetGenerator ::  createTarget(std::string const &name)
{
    if (name == "Dummy")
    {
        ATarget *o = new Fwoosh();
        return (o);
        
    }
    if else (name == "BrickWall")
    {
        ATarget *o = new Polymorph();
        return (o);
    }
    return (NULL);
}