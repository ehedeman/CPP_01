/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:07:22 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/04 13:21:22 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//new blah for allocating
//delete blah for de-allocating
int	zombieType(int type);

int	main()
{
	if (zombieType(1))
	{
		std::cout << "whoops, something went wrong, sorry.." << std::endl;
		return (0);
	}
	std::cout << "now the counter example: create some random Chumps!!" << std::endl;
	if (zombieType(0))
	{
		std::cout << "whoops, something went wrong, sorry.." << std::endl;
		return (0);
	}
	return (0);
}

static int	deleteUntilI(int i, Zombie **zombies)
{
	i--;
	while (i > -1)
	{
		delete(zombies[i]);
		i--;
	}
	return (1);
}

static int	check_valid_number(std::string str)
{
	int	i = 0;

	if (str[i] == '+')
		i++;
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

static int zombieCreation(int type, int nbr, Zombie **zombies)
{
	std::string			reply;
	int					i = 0;
	
	reply = "";
	
	std::string	names[nbr];

	if (nbr)
	{
		while (i < nbr && !std::cin.eof())
		{
			std::cout << "Name your " << i + 1 << ". Zombie!" << std::endl;
			std::cin >> names[i];
			if (type)
				zombies[i] = newZombie(names[i]);
			else
				randomChump(names[i]);
			i++;
		}
		if (std::cin.eof())
		{
			if (type)
				deleteUntilI(i, zombies);
			return (1);
		}
	}
	return (0);
}

static int getNbr()
{
	int	nbr;
	std::string reply;

	reply = "";
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
	nbr = atoi(reply.c_str());
	return (nbr);
}

static int doTheZombie(int nbr, Zombie **zombies)
{
	std::string reply = "";
	int			i = 0;

	if (reply == "no")
	{
		std::cout << "alright not much else to do then. i'll throw them away." << std::endl;
		deleteUntilI(nbr, zombies);
	}
	else if (reply == "yes")
	{
		i = 0;
		while (i < nbr)
		{
			zombies[i]->announce();
			i++;
		}
		i = 0;
		deleteUntilI(nbr, zombies);
	}
}

//type = 1 is for newZombie
//type = 0 is for randomChump
int	zombieType(int type)
{
	int	nbr;
	std::string reply;
	int i = 0;

	reply = "";
	nbr = getNbr();
	if (!nbr || nbr < 0)
		return (0);
	
	Zombie *zombies[nbr];
	if (type)
	{
		if (zombieCreation(type, nbr, zombies))
			return (1);
		reply = "";
		std::cout << "You want to hear them? (yes/no)" << std::endl;
		while (reply == "" && !std::cin.eof())
		{
			std::cin >> reply;
			if (reply == "yes" || reply == "no")
				break ;
			else
			{
				std::cout << "thats not a good reply." << std::endl;
				reply = "";
			}
		}
		if (std::cin.eof())
			return (deleteUntilI(i, zombies));
		std::cout << std::endl;
	}
	else if (!type)
	{
		if (zombieCreation(type, nbr, zombies))
			return (1);
	}
	return (0);
}