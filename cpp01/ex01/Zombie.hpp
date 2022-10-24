/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:56:11 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 07:02:04 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        
        void set_name(std::string name);
        void set_index(int n);
        void announce(void);
        int  getter_index(void);
    private:
        std::string _name;
        int _index;
  
};

Zombie* ZombieHorde(int n, std::string name);

#endif
