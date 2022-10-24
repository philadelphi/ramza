/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:58:13 by phaslan           #+#    #+#             */
/*   Updated: 2022/09/07 07:33:24 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include "Contact.hpp"

	class	Phonebook
	{
		private:
			
			Contact 	_Contact[8];
			int			_index;
		public:
			Phonebook();
			~Phonebook();
			void create_contact(int index);
			void show_all( void );
			void show_one(void);
	};

#endif