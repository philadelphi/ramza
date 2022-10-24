/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:17:15 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 07:33:21 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Phonebook.hpp"
#include "Contact.hpp"
#include "iomanip"

Phonebook::Phonebook( void ) : _index(0) {
	return;
}

Phonebook::~Phonebook( void ){
	return;
}

void Phonebook::show_one(void){
	std::string buff;

	getline(std::cin, buff);
	int number = std::atoi(buff.c_str());
	if (number >= 1 && number <= this->_index)
		this->_Contact[--number].display();	
	else
		std::cout << "non-existant index" << std::endl;
}

void Phonebook::create_contact(int i){
	this->_Contact[i].add_contact();
	if (this->_index < 8)
		this->_index += 1;
}

void Phonebook::show_all(void){
	int i;

	i = 0;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "|ID||    First|      Last|      Nick|" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	while (i < 8)
	{
		std::cout << std::setw(3) << i + 1 << "|";
		this->_Contact[i].show_all_contact();
		std::cout << std::endl;
		i++;
	}
	std::cout << "-------------------------------------" << std::endl;
}