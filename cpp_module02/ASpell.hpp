/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:51:41 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 09:21:10 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ASpell_HPP
#define ASpell_HPP

#include <iostream>
class ATarget;
class ASpell{
  protected:
  std::string name;
  std::string effects;

  public:
  
  ASpell();
  ASpell(const ASpell & obj);
  ASpell & operator=(const ASpell & obj);
  virtual ~ASpell();
  ASpell(const std::string & vn, const std::string &ve);
  
  std::string const & getName() const;
  std::string const & getEffects() const;

virtual ASpell * clone () const = 0;// Pure virtual function
void launch(const ATarget & obj) const;
    
};

#endif