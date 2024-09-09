/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:07:22 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/09 14:52:45 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//new blah for allocating
//delete blah for de-allocating

std::string	getName( void );
int			 getNbr();

int	main()
{
	int nbr = getNbr();
	if (!nbr)
	{
		std::cout << "You serious? A hoard consisting of 0 Zombies?" << std::endl;
		return (0);
	}
	else if (nbr < 0)
	{
		std::cout << "whoops, something went wrong, sorry.." << std::endl;
		return (0);
	}
	std::string name = getName();
	if (name == "")
		return (0);
	Zombie *horde = zombieHorde(nbr, name);
	std::cout << "Behold! The horde." << std::endl << "..." << std::endl;;
	for (int i = 0; i < nbr; i++)
	{
		horde[i].announce();
		std::cout << ".." << std::endl;
	}
	std::cout << "..." << std::endl << "...." << std::endl <<
	"Not so scary with those names, huh." << std::endl;
	delete[](horde);
	return (0);
}

static int	check_valid_number(std::string str)
{
	int	i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			std::cout << "Invalid: none digit-character detected." << std::endl;
			return (1);
		}
		i++;
	}
	return (0);
}

int getNbr()
{
	int	nbr;
	std::string reply = "";

	while (!std::cin.eof())
	{
		std::cout << "How many Zombies do you want?" << std::endl;
		std::cin >> reply;

		if (check_valid_number(reply))
		{
			std::cout << "Try again." << std::endl;
			reply = "";
		}
		else
			break ;
	}
	if (std::cin.eof())
		return (-1);
	nbr = std::atoi(reply.c_str());
	return (nbr);
}

std::string	getName( void )
{
	std::string name = "";

	while (!std::cin.eof() && name == "")
	{
		std::cout << "Name your Zombies!" << std::endl;
		std::cin >> name;
	}
	if (std::cin.eof())
		return ("");
	return (name);
}

