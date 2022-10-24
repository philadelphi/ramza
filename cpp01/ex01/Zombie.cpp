/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:56:08 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 07:01:58 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string name){
    this->_name = name;
    return;
}

Zombie::Zombie ( void ){
    return;
}

Zombie::~Zombie ( void ){
    std::cout << this->_name << " goes back to sleep" << std::endl;
    return;
}

void Zombie::set_name ( std::string name ){
    this->_name = name;
}

void Zombie::set_index ( int i){
    this->_index = i;
}

int Zombie::getter_index( void){
    return (this->_index);
}


void Zombie::announce ( void ){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}