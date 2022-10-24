/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:17:07 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/08 17:30:42 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA (std::string name, Weapon& armed): _Masamune(armed){
    this->_name = name;
    return;
}

HumanA::~HumanA ( void ){
    return;
}

void HumanA::attack()
{
    std::cout << this->_name << "attack with their " << this->_Masamune.getType() << std::endl;
}