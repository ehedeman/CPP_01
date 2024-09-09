/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:26:29 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/09 14:10:45 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	print_level(std::string	level, class Harl harl)
{
	std::cout << "[ " << level << " ]" << std::endl;
	harl.complain(level);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Number of arguments." << std::endl;
		return (0);
	}
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl harl;
	int level = 0;
	while (level < 4)
	{
		if (levels[level] == argv[1])
            break ;
		level++;
	}
	while (level <= 4)
	{
		switch (level)
		{
		case 0://DEBUG
			print_level(levels[0], harl);
			break ;
		case 1://INFO
			print_level(levels[1], harl);
			break ;
		case 2://WaRNING
			print_level(levels[2], harl);
			break ;
		case 3://ERROR
			print_level(levels[3], harl);
			return (0);
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		}
		level++;
	}
	return (0);
}