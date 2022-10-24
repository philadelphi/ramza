/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:12:19 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 07:33:28 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"
# include "Contact.hpp"

Contact::Contact( void ){
	return;
}

Contact::~Contact( void ){
	return;
}

void Contact::add_contact(void) {
    std::cout << "firstname : ";
    getline(std::cin, this->_firstname);
    std::cout << "lastname : ";
    getline(std::cin, this->_lastname);
    std::cout << "nickname : ";
    getline(std::cin, this->_nickname);
    std::cout << "phone number : ";
    getline(std::cin, this->_phonenumber);
    std::cout << "darkest secret : ";
    getline(std::cin, this->_darkestsecret);
}

void Contact::display(void) {
    std::cout << "firstname : " << this->_firstname << std::endl;
    std::cout << "lastname : " << this->_lastname << std::endl;
    std::cout << "nickname : " << this->_nickname << std::endl;
    std::cout << "phone number : " << this->_phonenumber << std::endl;
    std::cout << "darkest secret : " << this->_darkestsecret << std::endl;
}

void Contact::print_table(std::string str){
    std::cout << std::setw(10);
    if (str.length() > 10)
        str = str.substr(0, 9) + ".";
    std::cout << str << "|";
}

void Contact::show_all_contact(void) {
    print_table(this->_firstname);
    print_table(this->_lastname);
    print_table(this->_nickname);
}