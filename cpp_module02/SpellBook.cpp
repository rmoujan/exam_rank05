/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:40:49 by reshe             #+#    #+#             */
/*   Updated: 2023/07/24 22:40:51 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook :: SpellBook()
{
    

SpellBook :: SpellBook(SpellBook const & ref)
{
    *this = obj;
}

SpellBook const &  SpellBook :: operator=(SpellBook const  & obj)
{
    return (*this);
}

~SpellBook :: SpellBook()
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
        ASpell *o = new Fwoosh();
        return (o);
        
    }
    if else (name == "Polymorph")
    {
        ASpell *o = new Polymorph();
        return (o);
    }
    if else (name == "Fireball")
    {
        ASpell *o = new Fireball();
        return (o);
    }
    return (NULL);
}