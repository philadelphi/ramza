/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:17:49 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/08 17:29:40 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
    public:
        Weapon(void);
        Weapon(std::string name);
        ~Weapon(void);
        
        std::string getType();
        void setType(std::string type);
        
    private:
            std::string _type;
     
};

#endif