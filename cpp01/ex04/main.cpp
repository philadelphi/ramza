/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:51:52 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/09 19:46:32 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int outfile(char **argv, std::string str)
{
	std::ofstream outfile;
	int	pos;

	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
	{
		std::cout << "unable to create the outfile" << std::endl;
		return (1);
	}
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
			
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}

int main(int argc, char **argv)
{
	char	l;
	std::ifstream	ifs;
	std::string		str;

	if (argc != 4)
	{
		std::cout << "usage : ./Sed [infile] [string_to_search] [string_to_place]" << std::endl;
		return (1);
	}
	ifs.open(argv[1]);
	if (ifs.fail())
	{
		std::cout << "error : infile is either non-existing or open-restricted" << std::endl;
		return (1);
	}
	while (!ifs.eof() && ifs >> std::noskipws >> l)
		str += l;
	ifs.close();
	return(outfile(argv, str));
}