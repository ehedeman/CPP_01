/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:07:22 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/09 14:49:02 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//new blah for allocating
//delete blah for de-allocating
int	zombieType(int type);

int	main()
{
	if (zombieType(1))//zombies
	{
		std::cout << "whoops, something went wrong, sorry.." << std::endl;
		return (0);
	}
	std::cout << "now the counter example: create some random Chumps!!" << std::endl;
	if (zombieType(0))//chumps
	{
		std::cout << "whoops, something went wrong, sorry.." << std::endl;
		return (0);
	}
	return (0);
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

static int	deleteUntilI(int i, Zombie **zombies)
{
	i--;
	while (i >= 0)
	{
		delete(zombies[i]);
		i--;
	}
	delete[](zombies);
	return (1);
}

static int doTheZombie(int nbr, Zombie **zombies)
{
	std::string reply = "";
	int			i = 0;

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
		return(deleteUntilI(nbr, zombies));
	std::cout << std::endl;
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
		deleteUntilI(nbr, zombies);
	}
	return (0);
}

static int zombieCreation(int type, int nbr, Zombie **zombies)
{
	int					i = 0;

	if (nbr)
	{
		std::string	name;
		while (i < nbr && !std::cin.eof())
		{
			std::cout << "Name your " << i + 1 << ". Zombie!" << std::endl;
			std::cin >> name;
			if (type)
				zombies[i] = newZombie(name);
			else
				randomChump(name);
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

//type = 1 is for newZombie
//type = 0 is for randomChump
int	zombieType(int type)
{
	int	nbr;

	nbr = getNbr();
	if (nbr < 0)
		return (1);
	else if (!nbr)
		return (0);	
	Zombie **zombies = new Zombie*[nbr];
	if (type)
	{
		if (zombieCreation(type, nbr, zombies))
			return (1);
		if (doTheZombie(nbr, zombies))
			return (1);
	}
	else if (!type)
	{
		if (zombieCreation(type, nbr, zombies))
			return (1);
		delete[](zombies);
	}
	return (0);
}