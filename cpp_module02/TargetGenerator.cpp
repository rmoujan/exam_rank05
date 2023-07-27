/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:20:02 by reshe             #+#    #+#             */
/*   Updated: 2023/07/27 13:22:56 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "TargetGenerator.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"

TargetGenerator :: TargetGenerator()
{
    
}
TargetGenerator :: TargetGenerator(TargetGenerator const  & obj) 
{
    *this = obj;
}

TargetGenerator const &  TargetGenerator :: operator=(TargetGenerator const & obj)
{
    (void)obj;
    return (*this);
}

TargetGenerator :: ~TargetGenerator()
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
    if (name == "Target Practice Dummy")
    {
        ATarget *o = new Dummy();
        return (o);
        
    }
    else if  (name == "Inconspicuous Red-brick Wall")
    {
        ATarget *o = new BrickWall();
        return (o);
    }
    return (NULL);
}