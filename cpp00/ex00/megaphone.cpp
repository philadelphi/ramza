/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:00:05 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 07:31:03 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	toupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}

int		main(int argc, char **argv)
{

    char *buff;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
    {
        for (int i = 1; argv[i]; i++)
	    {
            buff = argv[i];
            toupper(buff);
			std::cout << buff;
	    }
    }
    std::cout << std::endl;
	return (0);
}