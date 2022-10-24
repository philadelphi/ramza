/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:57:34 by phaslan           #+#    #+#             */
/*   Updated: 2022/10/19 19:25:30 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl Harl;
	std::cout << "------------" << std::endl;
	Harl.complain("debug");
	std::cout << "-----------" << std::endl;
	Harl.complain("error");
	std::cout << "-----------" << std::endl;
	Harl.complain("info");
	std::cout << "-----------" << std::endl;
	Harl.complain("warning");
	std::cout << "-----------" << std::endl;
	Harl.complain("rien du tout");
	
}