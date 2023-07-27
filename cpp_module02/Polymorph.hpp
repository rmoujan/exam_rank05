/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:30:43 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 14:31:18 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Polymorph : public ASpell{

public:
  
  Polymorph();

  ~Polymorph();
  Polymorph(const std::string &vn, const std::string &ve);
  
  virtual Polymorph * clone () const;// Pure virtual function


};

#endif