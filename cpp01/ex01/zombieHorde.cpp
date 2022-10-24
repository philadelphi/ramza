/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:56:01 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 05:48:16 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde(int n, std::string name){
    
    Zombie* ret = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        ret[i].set_index(i);
        ret[i].set_name(name);
    }
    return (ret);
}