/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <otodd@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:43:51 by otodd             #+#    #+#             */
/*   Updated: 2024/11/18 17:15:56 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook()
{
	this->length = 0;
	for (int i = 0; i <= 7; i++)
	{
		this->contacts[i].index = i;
		this->contacts[i].firstName = "";
		this->contacts[i].lastName = "";
		this->contacts[i].nickname = "";
		this->contacts[i].isPopulated = false;
	}
}

void	PhoneBook::Add(std::string firstName, std::string lastName,
	std::string nickName)
{
	int	index;
	if (this->length >= 7)
		index = this->length;
	else
		index = this->length++;
	Contact	contact;
	contact.firstName = firstName;
	contact.lastName = lastName;
	contact.nickname = nickName;
	contact.index = index;
	contact.isPopulated = true;
	this->contacts[index] = contact;
}

std::string	PhoneBook::Trunc(std::string str)
{
	std::string	tmp = "          ";
	for (int i = 0; str[i]; i++)
	{
		if (i == 9)
			tmp[i] = '.';
		else
			tmp[i] = str[i];
	}
	return (tmp);
}

void	PhoneBook::Display()
{
	for (int i = 0; i <= 7; i++)
	{
		if (this->contacts[i].isPopulated)
		{
			std::stringstream tmp;
			tmp << (this->contacts[i].index + 1);
			std::cout << this->Trunc(tmp.str());
			std::cout << " | " << this->Trunc(this->contacts[i].firstName);
			std::cout << " | " << this->Trunc(this->contacts[i].lastName);
			std::cout << " | " << this->Trunc(this->contacts[i].nickname) << '\n';
		}
	}
}