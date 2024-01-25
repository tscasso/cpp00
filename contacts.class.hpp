/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:34:51 by tscasso           #+#    #+#             */
/*   Updated: 2024/01/25 15:48:29 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_HPP
#define CONTACTS_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook;

class Contacts
{
public:

	Contacts(void);
	~Contacts(void);
	void			create_contact(PhoneBook &book, int index);
	void			print_contact(void);
	void			add_to_book(Contacts &contact, PhoneBook &book, int index);
	std::string		getInput(const std::string &prompt);
	std::string		getName(void);
	std::string		getLastName(void);
	std::string		getNickname(void);
	std::string		getSecret(void);


private:

	int				index;
	std::string		name;
	std::string		lastname;
	std::string		nickname;
	std::string		secret;
};




#endif
