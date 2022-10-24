/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:17:04 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/08 17:23:37 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon& _Masamune;

    public:
        HumanA(std::string name, Weapon& armed);
        ~HumanA(void);
        
        void attack();
};

#endif