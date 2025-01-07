/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <otodd@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:10:00 by otodd             #+#    #+#             */
/*   Updated: 2025/01/07 15:14:34 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact()
{
	this->isPopulated = false;
	this->darkestSecret = "";
	this->firstName = "";
	this->lastName = "";
	this->index = 0;
	this->nickname = "";
	this->phoneNumber = "";
}