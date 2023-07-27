/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:41:40 by reshe             #+#    #+#             */
/*   Updated: 2023/07/20 16:06:52 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
#define DUMMY_HPP

#include<iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class Dummy : public ATarget{

public:
  
  Dummy();
  ~Dummy();
  Dummy(const std::string & vt);

virtual ATarget * clone () const; // Pure virtual function
};

#endif