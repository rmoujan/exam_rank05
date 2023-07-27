/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:41:43 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 09:36:57 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Fwoosh : public ASpell{

public:
  
  Fwoosh();

  ~Fwoosh();
  Fwoosh(const std::string &vn, const std::string &ve);
  
  virtual Fwoosh * clone () const;// Pure virtual function


};

#endif