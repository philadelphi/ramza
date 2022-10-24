/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:53:12 by phaslan           #+#    #+#             */
/*   Updated: 2022/10/21 18:41:12 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

    Zombie* army1;
    Zombie* army2;
    std::string name1 = "joel";
    std::string name2 = "billy";

    std::cout << "petit zombie solo\n";
    Zombie Zombie(name1);
    Zombie.announce();
    std::cout << std::endl;
    
    std::cout << "armada de 10 zombies\n";
    army1 = ZombieHorde(10, name2);
    for (int i = 0; i < 10; i++)
    {
        std::cout << army1[i].getter_index() << " ";
        army1[i].announce();
        std::cout << std::endl;
    }

    std::cout << "armada de 5 zombies\n";
    army2 = ZombieHorde(5, "jack");
    for (int i = 0; i < 5; i++)
    {
        std::cout << army2[i].getter_index() << " ";
        army2[i].announce();
        std::cout << std::endl;
    }

    delete[] army1;
    delete[] army2;
    return(0);
}