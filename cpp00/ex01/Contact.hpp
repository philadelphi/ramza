/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:46:17 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 07:33:27 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdlib.h>
# include "Phonebook.hpp"

class Contact 
{
    public:
            Contact(void);
            ~Contact(void);
            
            void add_contact(void);
            void show_all_contact(void);
            void display(void);
            void print_table(std::string str);
    private:
            std::string _firstname;
            std::string _lastname;
            std::string _nickname;
            std::string _phonenumber;
            std::string _darkestsecret;
};

#endif