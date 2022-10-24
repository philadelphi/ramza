/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:17:01 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/08 17:39:46 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB (std::string name){
    this->_name = name;
    return;
}

HumanB::~HumanB ( void ){
    return;
}

void HumanB::attack()
{
    std::cout << this->_name << "attack with their " << this->_Masamune->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Armed){
    this->_Masamune = &Armed;
}