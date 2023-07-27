/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:45:57 by reshe             #+#    #+#             */
/*   Updated: 2023/07/24 22:11:55 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock :: Warlock()
{
    this->b = new SpellBook();
}

Warlock :: Warlock(std::string const & vn,  std::string const & vt)
{
    this->name = vn;
    this->title = vt;
    this->b = new SpellBook();
    std::cout <<this->name<< ": This looks like another boring day."<<std::endl;

}

Warlock :: ~Warlock()
{
    std::cout <<this->name<< ": My job here is done!"<<std::endl;


    std::vector<ASpell*>::iterator it;
    for (it = this->myVector.begin(); it != this->myVector.end(); it++)
    {
            delete *it;
    }
    delete b;
}

void Warlock :: introduce() const {
    std::cout  <<this->name<<": I am "<<this->name<<", "<<this->title<<"!"<<std::endl;
}

 std::string const & Warlock :: getName() const {
    return (this->name);
}

 std::string const & Warlock :: getTitle() const {
    return (this->title);
}

void Warlock :: setTitle(std::string const & v)
{
    this->title = v;
}

Warlock :: Warlock(Warlock const &obj)
{
    *this = obj;
}

Warlock & Warlock :: operator=(Warlock const &obj)
{
    this->name = obj.name;
    this->title = obj.title;
    return *this;
}

void Warlock :: learnSpell(ASpell * ptr)
{
    if (ptr)
        myVector.push_back(ptr);
}

//second version with iterators 
void Warlock :: forgetSpell(std::string name)
{
    std::vector<ASpell*>::iterator it;
    
    for (it = this->myVector.begin(); it != this->myVector.end(); it++)
    {
        if ((*it)->getName() == name)
        {
            this->myVector.erase(it);
            this->b->forgetSpell(name);
            return ;
        }
    }
}

// perfect second version with iterators :
void Warlock :: launchSpell(std::string name,  ATarget const & ref)
{
  /* std::vector<ASpell*>::iterator it;
    
    for (it = this->myVector.begin(); it != this->myVector.end(); it++)
    {
        if ((*it)->getName() == name)
        {
            (*it)->launch(ref);
        }
    */
    ASpell* ptr;
    ptr = this->b->createSpell(name);
    if (ptr != NULL)
    {
        ptr->launch(ref);
    }
}