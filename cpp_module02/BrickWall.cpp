/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:52:15 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 14:52:51 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall :: BrickWall()
{
    this->type = "Inconspicuous Red-brick Wall";
}

BrickWall :: BrickWall(const std::string &vt)
{
this->type = vt;
}

BrickWall :: ~BrickWall()
{
    
}

ATarget * BrickWall :: clone ()const
{
    return (new BrickWall());
}