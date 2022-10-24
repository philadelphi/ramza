/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 08:16:24 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 08:38:27 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "Billy Joel";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << std::endl;
    std::cout << "ADDRESSES" << std::endl;
    std::cout << std::endl;
    std::cout << "Memory address of str : " << &str << std::endl;
    std::cout << "Memory address of stringPTR : " << stringPTR << std::endl;
    std::cout << "Memory address of stringREF : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "VALUES" << std::endl;
    std::cout << std::endl;
    std::cout << "Value address of str : " << str << std::endl;
    std::cout << "Value address of stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value address of stringREF : " << stringREF << std::endl;
}