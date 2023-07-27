/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:56:34 by reshe             #+#    #+#             */
/*   Updated: 2023/07/27 12:34:23 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Polymorph.hpp"
#include "Fireball.hpp"
#include "TargetGenerator.hpp"
#include "BrickWall.hpp"

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;
 //std::cout <<"1111"<<std::endl;
  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;
 // std::cout <<"2222"<<std::endl;
  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);
 // std::cout <<"3333"<<std::endl;
  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");
 // std::cout <<"MAIN "<<wall->getType()<<std::endl;
  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
//std::cout <<"5555"<<std::endl;
  richard.launchSpell("Fireball", *wall);
//  std::cout <<"4444"<<std::endl;
}
