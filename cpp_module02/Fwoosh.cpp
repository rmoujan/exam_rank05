/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:41:46 by reshe             #+#    #+#             */
/*   Updated: 2023/07/20 16:07:58 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh :: Fwoosh()
{
    this->name ="Fwoosh";
    this->effects ="fwooshed";
}


Fwoosh :: Fwoosh(const std::string & vn, const std::string &ve)
{
    this->name = vn;
    this->effects = ve;
}

Fwoosh :: ~Fwoosh()
{
    
}


Fwoosh * Fwoosh :: clone ()const
{
    return (new Fwoosh());
}