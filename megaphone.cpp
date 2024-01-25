/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:20:13 by tscasso           #+#    #+#             */
/*   Updated: 2024/01/08 15:55:11 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // pour gérer les flux d'entré/sortie
#include <cctype> // pour utiliser la fonction toupper

int		main(int ac, char *av[])
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
			for (int j = 0; av[i][j]; j++)
					std::cout << (char)std::toupper(av[i][j]);
		std::cout << std::endl;
	}
	return 0;
}


