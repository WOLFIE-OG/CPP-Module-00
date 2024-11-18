/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <otodd@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:39:43 by otodd             #+#    #+#             */
/*   Updated: 2024/11/18 16:51:47 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact {
	public:
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		bool		isPopulated;
};

#endif