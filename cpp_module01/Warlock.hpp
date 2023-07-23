/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:34:09 by reshe             #+#    #+#             */
/*   Updated: 2023/07/23 09:47:52 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <vector>
#include "ATarget.hpp"
#include "ASpell.hpp"

class Warlock{

  private:

  std::vector<ASpell*> myVector;
  std::string name;
  std::string title;

  Warlock();
  Warlock( Warlock  const &obj);
  Warlock & operator=( Warlock const &obj);

  public:
  ~Warlock ();  
   std::string const & getName() const;
   std::string const & getTitle() const;
  void setTitle(std::string const & name);
  Warlock ( std::string const & vn,  std::string const & vt);
  
  void  introduce() const ;
  void learnSpell(ASpell * ptr);
  void forgetSpell(std::string name);
  void launchSpell(std::string name,  ATarget const &ref);
};

#endif