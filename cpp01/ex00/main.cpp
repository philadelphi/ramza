/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:53:12 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 03:47:44 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

    Zombie* Random;
    std::string name1 = "abra";
    std::string name2 = "kadabra";
    std::string name3 = "alakazam";

    Zombie Zombie(name1);
    Random = newZombie(name2);
    Zombie.announce();
    Random->announce();
    randomChump(name3);
    delete Random;
    return(0);
}