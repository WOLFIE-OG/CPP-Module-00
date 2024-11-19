/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <otodd@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:22:38 by otodd             #+#    #+#             */
/*   Updated: 2024/11/19 14:23:33 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;

	while (true)
	{
		cmd.clear();
		std::cout << "═ Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, cmd);
		if (cmd.empty())
			continue;
		phonebook.lowerCommand(&cmd);
		if (cmd.compare("add") == 0)
			phonebook.addCommand();
		else if (cmd.compare("search") == 0)
			phonebook.searchCommand();
		else if (cmd.compare("exit") == 0)
			break;
		else
			std::cout << "═ Not a valid command." << '\n';
		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}