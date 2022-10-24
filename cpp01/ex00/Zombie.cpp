/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:56:08 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 03:53:14 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string name){
    this->_name = name;
    return;
}

Zombie::~Zombie ( void ){
    std::cout << this->_name << " goes back to sleep" << std::endl;
    return;
}

void Zombie::announce ( void ){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}