/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:48:55 by tscasso           #+#    #+#             */
/*   Updated: 2024/01/22 14:43:00 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include "contacts.class.hpp"

int	main()
{
	PhoneBook	book;
	std::string input;
	int			index;

	index = 0;
	std::cout << "Choose one of this (ADD, SEARCH, EXIT)" << std::endl;
	while (std::getline(std::cin, input) && input.compare("EXIT") != 0)
	{
		if (input == "ADD")
		{
			book.add_contact(index, book);
			++index;
			if (index == 8)
				index = 0;
		}
		else if (input == "SEARCH")
			book.search_contact();
		else
			std::cout << "Invalid input try one of this (ADD, SEARCH, EXIT)" << std::endl;
	}
	return 0;
}

