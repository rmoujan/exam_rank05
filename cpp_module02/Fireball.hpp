/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:25:31 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 14:29:14 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Fireball : public ASpell{

public:
  
  Fireball();

  ~Fireball();
  Fireball(const std::string &vn, const std::string &ve);
  
  virtual Fireball * clone () const;// Pure virtual function


};

#endif