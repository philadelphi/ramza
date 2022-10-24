/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:16:54 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/08 17:39:16 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon *_Masamune;

    public:
        HumanB(std::string name);
        ~HumanB(void);
        
        void attack();
        void setWeapon(Weapon &Armed);
};

#endif