/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:53:18 by reshe             #+#    #+#             */
/*   Updated: 2023/07/27 11:39:41 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include "Fwoosh.hpp"
#include "Polymorph.hpp"
#include "Fireball.hpp"
#include <vector>
class SpellBook {

    private:
    std::vector<ASpell*> book;
    SpellBook(SpellBook const & ref);
    SpellBook const & operator=(SpellBook const & ref);
    public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell* ptr);
    void forgetSpell(std::string const &name);
    ASpell* createSpell(std::string const & name);
    
    
    
};

#endif