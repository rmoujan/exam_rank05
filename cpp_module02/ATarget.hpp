/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:04:27 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 09:39:49 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"

class ASpell;
class ATarget{
    
  protected:
  std::string type;

  public:
  
  ATarget();
  ATarget(const ATarget & obj);
  ATarget & operator=(const ATarget & obj);
  virtual ~ATarget();
  ATarget(const std::string &vt);
  
   std::string const & getType() const;

  virtual ATarget * clone ()  const = 0;// Pure virtual function
  void getHitBySpell( ASpell const & obj)const;
 
};

#endif