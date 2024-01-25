/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:41:07 by tscasso           #+#    #+#             */
/*   Updated: 2024/01/25 16:16:08 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.class.hpp"
#include "phonebook.class.hpp"

Contacts::Contacts(void)
{
	return;
}

Contacts::~Contacts(void)
{
	return;
}

std::string	Contacts::getName(void)
{
	return (this->name);
}

std::string	Contacts::getLastName(void)
{
	return (this->lastname);
}

std::string	Contacts::getNickname(void)
{
	return (this->nickname);
}

void	Contacts::print_contact(void)
{
	std::cout << "name: " << getName() << std::endl;
	std::cout << "lastname: " << getLastName() << std::endl;
	std::cout << "name: " << getNickname() << std::endl;
}

void	Contacts::add_to_book(Contacts &contact, PhoneBook &book, int index)
{
	book.addContact(contact, index);
}

std::string	Contacts::getInput(const std::string &prompt)
{
	std::string input;

	std::cout << prompt;
	if (std::getline(std::cin, input) && !input.empty())
		return input;
	else
	{
		std::cout << "Empty input try again" << std::endl;
		getInput(prompt);
	}
	return input;
}

void	Contacts::create_contact(PhoneBook &book, int index)
{
	Contacts 	new_contact;
	std::string	input;

	new_contact.name = getInput("Enter the name: ");
	new_contact.lastname = getInput("Enter the lastname: ");
	new_contact.nickname = getInput("Enter the nickname: ");
	new_contact.secret = getInput("Enter secret: ");
	new_contact.add_to_book(new_contact, book, index);
	return;
}