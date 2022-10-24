/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:18:01 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/08 16:16:56 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){
    return;
}

Weapon::Weapon (std::string name){
    this->_type = name;
    return;
}

Weapon::~Weapon ( void ){
    return;
}

std::string Weapon::getType ( void ){
    return (this->_type);
}

void Weapon::setType (std::string type){
    this->_type = type;
}