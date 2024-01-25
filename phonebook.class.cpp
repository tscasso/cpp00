/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:34:05 by tscasso           #+#    #+#             */
/*   Updated: 2024/01/25 16:05:29 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "phonebook.class.hpp"
#include "contacts.class.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void 	PhoneBook::addContact(Contacts &contact, int index)
{
	this->list[index] = contact;
}

std::string	truncate(std::string s, size_t width)
{
	if (s.length() > width)
		return (s.substr(0, width - 1) + ".");
	else
		return (s);
}


void	PhoneBook::printTable(void)
{
	std::cout << std::setw(11) << "Index|";
	std::cout << std::setw(11) << "Name|";
	std::cout << std::setw(11) << "Last name|";
	std::cout << std::setw(11) << "Nickname|";
	std::cout << std::endl;

	for (int idx = 0; idx < 8; idx++)
	{
		if (!this->list[idx].getName().empty())
		{
			for (int i = 0; i < 44; i++)
				std::cout << "-";
			std::cout << std::endl;
			std::cout << std::setw(10) << idx + 1 << "|";
			std::cout << std::setw(10) << truncate(this->list[idx].getName(), 10) << "|";
			std::cout << std::setw(10) << truncate(this->list[idx].getLastName(), 10) << "|";
			std::cout << std::setw(10) << truncate(this->list[idx].getNickname(), 10) << std::endl;		}
	}
}

void	PhoneBook::search_contact(void)
{
	std::string	in;
	int			idx;

	printTable();
	std::cout << "Select contact to show: ";
	std::getline(std::cin, in);
	std::stringstream(in) >> idx;
	if (idx > 0 && idx < 9)
	{
		if (this->list[idx - 1].getName().empty())
			std::cout << "Contact is empty" << std::endl;
		else
			this->list[idx - 1].print_contact();
	}
	else
		std::cout << "Can't find contact" << std::endl;
}

void	PhoneBook::add_contact(int index, PhoneBook &book)
{
	this->list[index].create_contact(book, index);
}