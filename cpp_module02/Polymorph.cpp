/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:31:29 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 14:31:57 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph :: Polymorph()
{
    this->name ="Polymorph";
    this->effects ="turned into a critter";
}


Polymorph :: Polymorph(const std::string & vn, const std::string &ve)
{
    this->name = vn;
    this->effects = ve;
}

Polymorph :: ~Polymorph()
{
    
}


Polymorph * Polymorph :: clone ()const
{
    return (new Polymorph());
}