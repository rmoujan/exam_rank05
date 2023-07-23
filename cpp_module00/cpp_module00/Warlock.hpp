/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:34:09 by reshe             #+#    #+#             */
/*   Updated: 2023/07/18 14:53:03 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
 
class Warlock{

  private:
  std::string name;
  std::string title;
  Warlock();
  Warlock(const Warlock& obj);
  Warlock & operator=(const Warlock& obj);

  public:
  ~Warlock ();  
   std::string const & getName() const;
   std::string const & getTitle() const;
  void setTitle(std::string const & name);
  Warlock ( std::string const & vn,  std::string const & vt);
  void  introduce() const ;
  
};