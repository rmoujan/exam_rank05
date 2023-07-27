/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:51:29 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 14:51:51 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include<iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class BrickWall : public ATarget{

public:
  
  BrickWall();
  ~BrickWall();
  BrickWall(const std::string & vt);

virtual ATarget * clone () const; // Pure virtual function
};

#endif