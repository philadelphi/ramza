/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:01:59 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/08 13:22:00 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string.h>
# include "Phonebook.hpp"
# include "Contact.hpp"

int main (int ac, char **av)
{
	Phonebook Phonebook[8];
	int		i;
	std::string command;
	(void)ac;
	(void)av;

	std::cout << "you can use ADD, SEARCH or EXIT" << std::endl;
	i = 0;
	while (1)
	{
		if (i == 8)
			i = 0;
		std::cout << "please use a command > ";
		getline(std::cin, command);

		if (command.compare("ADD") == 0)
		{
			Phonebook->create_contact(i);
			i++;
		}
		else if (command.compare("SEARCH") == 0)
		{
			Phonebook->show_all();
			std::cout << "enter an index : ";
			Phonebook->show_one();
		}
		else if (command.compare("EXIT") == 0 || std::cin.eof())
		{
			std::cout << "bye." << std::endl;
			break;
		}
		else
			std::cout << "you can only use ADD, SEARCH or EXIT" << std::endl;
	}
}