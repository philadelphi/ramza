/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:56:11 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 03:46:49 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie(void);
        
        void announce(void);
    private:
        std::string _name;
  
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif
