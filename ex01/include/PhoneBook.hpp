/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <otodd@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:35:11 by otodd             #+#    #+#             */
/*   Updated: 2024/11/18 17:07:35 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook {

	public:
		Contact	contacts[8];
		void	Add(
			std::string firstName,
			std::string lastName,
			std::string nickName
		);
		void	Display(void);
		PhoneBook(void);
	private:
		size_t		length;
		std::string	Trunc(std::string str);
};

#endif