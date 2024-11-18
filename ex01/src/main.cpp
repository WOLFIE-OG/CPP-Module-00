/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <otodd@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:22:38 by otodd             #+#    #+#             */
/*   Updated: 2024/11/18 17:14:13 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	phonebook.Add("Oliver1", "Todd1", "OliverTodd1");
	phonebook.Add("Oliver2", "Todd2", "OliverTodd2");
	phonebook.Add("Oliver3", "Todd3", "OliverTodd3");
	phonebook.Add("Oliver4", "Todd4", "OliverTodd4");
	phonebook.Add("Oliver5", "Todd5", "OliverTodd5");
	phonebook.Add("Oliver6", "Todd6", "OliverTodd6");
	phonebook.Add("Oliver7", "Todd7", "OliverTodd7");
	phonebook.Add("Oliver8", "Todd8", "OliverTodd8");
	phonebook.Add("asdasdas", "asdasdadasdsadsadasdssad", "sasdasdasdadasdsad");
	phonebook.Display();
	return (0);
}