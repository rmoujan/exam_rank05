/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:29:30 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 14:30:13 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball :: Fireball()
{
    this->name ="Fireball";
    this->effects ="burnt to a crisp";
}


Fireball :: Fireball(const std::string & vn, const std::string &ve)
{
    this->name = vn;
    this->effects = ve;
}

Fireball :: ~Fireball()
{
    
}


Fireball * Fireball :: clone ()const
{
    return (new Fireball());
}