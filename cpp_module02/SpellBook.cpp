/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:40:49 by reshe             #+#    #+#             */
/*   Updated: 2023/07/27 13:22:18 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook :: SpellBook()
{
    
}

SpellBook :: SpellBook(SpellBook const & ref)
{
    *this = ref;
}

SpellBook const &  SpellBook :: operator=(SpellBook const  & obj)
{
    (void)obj;
    return (*this);
}

SpellBook :: ~SpellBook()
{
     
}

void SpellBook :: learnSpell(ASpell* ptr)
{
    this->book.push_back(ptr);
    
}

void  SpellBook :: forgetSpell(std::string const &name)
{
    std::vector<ASpell*>::iterator it;
    for (it = this->book.begin(); it != this->book.end(); it++)
    {
        if (name == (*it)->getName())
        {
            this->book.erase(it);
            return ;
        }
    }
}

ASpell*  SpellBook :: createSpell(std::string const & name)
{
    if (name == "Fwoosh")
    {
       // std::cout <<"01"<<std::endl;
        ASpell *o = new Fwoosh();
        return (o);
        
    }
    else if (name == "Polymorph")
    {
        ASpell *o = new Polymorph();
        
       // std::cout <<"02 and o is "<<o<<std::endl;
        return (o);
    }
    else if (name == "Fireball")
    {
        //std::cout <<"03"<<std::endl;
        ASpell *o = new Fireball();
        return (o);
    }
    return (NULL);
}