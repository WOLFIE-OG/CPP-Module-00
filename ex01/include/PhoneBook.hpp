/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <otodd@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:35:11 by otodd             #+#    #+#             */
/*   Updated: 2025/01/07 14:59:32 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include "Contact.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook {
	public:
		void	addCommand();
		void	searchCommand();
		void	lowerCommand(std::string *str);
		PhoneBook();
	private:
		size_t	length;
		Contact	contacts[8];
		std::string	trunc(std::string str);
		void	add(Contact *contact);
		bool	display();
		void	display(size_t index);
};

#endif