/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <otodd@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:43:51 by otodd             #+#    #+#             */
/*   Updated: 2025/01/21 14:35:36 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->length = 0;
	for (int i = 0; i <= 7; i++)
		this->contacts[i].index = i;
}

void	PhoneBook::add(Contact *contact)
{
	contact->isPopulated = true;
	this->contacts[this->length % 8] = *contact;
	for (int i = 0; i <= 7; i++)
		this->contacts[i].index = i;
	this->length++;
}
    
std::string	PhoneBook::trunc(std::string str)
{
	std::string	tmp = "";
	for (int i = 0; str[i]; i++)
	{
		if (i == 9)
		{
			tmp += '.';
			break;
		}
		else
			tmp += str[i];
	}
	return (tmp);
}

void	PhoneBook::display(size_t index)
{
	if (index > 7)
	{
		std::cout << "═  Invalid index." << std::endl;
		return;
	}
	if (this->contacts[index].isPopulated)
	{
		std::stringstream tmp;
		tmp << (this->contacts[index].index + 1);
		std::cout << '\n' << "╔ " << "Contact Index:          " << tmp.str() << '\n';
		std::cout << "╟ " << "Contact Firstname:      " << this->contacts[index].firstName << '\n';
		std::cout << "╟ " << "Contact Lastname:       " << this->contacts[index].lastName << '\n';
		std::cout << "╟ " << "Contact Nickname:       " << this->contacts[index].nickname << '\n';
		std::cout << "╟ " << "Contact Phone Number:   " << this->contacts[index].phoneNumber << '\n';
		std::cout << "╚ " << "Contact Darkest Secret: " << this->contacts[index].darkestSecret << std::endl;
	}
	else
		std::cout << "═  Contact index doesn't yet exist." << std::endl;
}

bool	PhoneBook::display()
{
	if (!this->length)
	{
		std::cout << "═  No records in phonebook." << std::endl;
		return (false);
	}
	std::cout << " ___________________________________________________" << std::endl;
	std::cout << "|    Index   | First Name |  Last Name |  Nickname  |" << std::endl;
	for (int i = 0; i <= 7; i++)
	{
		if (this->contacts[i].isPopulated)
		{
			std::stringstream tmp;
			tmp << "| " << std::right << std::setw(10) << (this->contacts[i].index + 1);
			std::cout << std::right << std::setw(10) << tmp.str();
			std::cout << " | " << std::right << std::setw(10) << this->trunc(this->contacts[i].firstName);
			std::cout << " | " << std::right << std::setw(10) << this->trunc(this->contacts[i].lastName);
			std::cout << " | " << std::right << std::setw(10) << this->trunc(this->contacts[i].nickname) << " |" << std::endl;
		}
	}
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	return (true);
}

static void	getInput(std::string *input, std::string prompt)
{
	std::cout << prompt;
	while (true)
	{
		std::getline(std::cin, (*input));
		if ((*input).empty())
		{
			std::cout << "═ Field cannot be empty.\n";
			std::cout << prompt;
		}
		else
			break;
	}
}

void	PhoneBook::addCommand()
{
	Contact	contact;
	getInput(&contact.firstName, "╔ Firstname: ");
	getInput(&contact.lastName, "╟ Lastname: ");
	getInput(&contact.nickname, "╟ Nickname: ");
	getInput(&contact.phoneNumber, "╟ Phone Number: ");
	getInput(&contact.darkestSecret, "╚ Darkest Secret: ");
	this->add(&contact);
}

void	PhoneBook::searchCommand()
{
	std::string	queryStr;
	int			queryInt;

	if (this->display())
	{
		std::cout << "═ Enter index of contact to show: ";
		std::getline(std::cin, queryStr);
		queryInt = atoi(queryStr.c_str());
		if (queryInt <= 0)
			std::cout << "═  Invalid index." << std::endl;
		else
			this->display(queryInt - 1);
	}
}

void	PhoneBook::lowerCommand(std::string *str)
{
	for (size_t i = 0; i <= (*str).length(); i++)
	{
		if (isalpha((*str)[i]))
			(*str)[i] = tolower((*str)[i]);
	}
}
