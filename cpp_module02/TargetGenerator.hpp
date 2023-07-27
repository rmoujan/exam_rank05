/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reshe <reshe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:16:10 by reshe             #+#    #+#             */
/*   Updated: 2023/07/24 22:38:48 by reshe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <vector>
class TargetGenerator {

    private:
    std::vector<ATarget*> targets;
    TargetGenerator(TargetGenerator const & ref);
    TargetGenerator const & operator=(TargetGenerator const & ref);
    public:
    TargetGenerator();
    ~TargetGenerator();

   void learnTargetType(ATarget* trg);
   void forgetTargetType(std::string const & name);
   ATarget* createTarget(std::string const &name);
   
    
    
};

#endif