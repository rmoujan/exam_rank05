/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:41:37 by reshe             #+#    #+#             */
/*   Updated: 2023/07/20 16:06:56 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy :: Dummy()
{
    this->type = "Target Practice Dummy";
}

Dummy :: Dummy(const std::string &vt)
{
this->type = vt;
}

Dummy :: ~Dummy()
{
    
}

ATarget * Dummy :: clone ()const
{
    return (new Dummy());
}