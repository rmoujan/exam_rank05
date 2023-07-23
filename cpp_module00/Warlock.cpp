/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:45:57 by reshe             #+#    #+#             */
/*   Updated: 2023/07/18 12:38:31 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock :: Warlock()
{
    
}

Warlock :: Warlock(std::string vn, std::string vt)
{
    this->name = vn;
    this->title = vt;
    std::cout <<this->name<< ": This looks like another boring day."<<std::endl;
}

Warlock :: ~Warlock()
{
    std::cout <<this->name<< ": My job here is done!"<<std::endl;
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

Warlock :: Warlock( const Warlock &  obj)
{
    *this = obj;
}

Warlock & Warlock :: operator=(const Warlock & obj)
{
    this->name = obj.name;
    this->title = obj.title;
    return *this;
}