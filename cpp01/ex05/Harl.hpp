/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:59:54 by phaslan           #+#    #+#             */
/*   Updated: 2022/10/19 19:09:56 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>

class Harl {
	private:
	void _debug( void );
	void _info( void );
	void _warning( void );
	void _error( void );
	
	public:
	Harl();
	~Harl();
	void complain(std::string level);

};

#endif