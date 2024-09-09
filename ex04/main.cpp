/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:47:27 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/09 14:05:09 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

using namespace std;

static std::string	ft_replace(std::string contents, std::string search, std::string replace)
{
	size_t	start;
	size_t	length;

	start = 0;
	length = search.length();
	start = contents.find(search);
	while (start != std::string::npos)
	{
		contents.erase(start, length);
		contents.insert(start, replace);
		start = contents.find(search, start + replace.length());
	}
	return (contents);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Number of arguments." << std::endl;
		return (0);
	}
	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string buff;
	std::string contents;
	std::fstream file;
	
	file.open(filename.c_str(), ios::in);
	if (file.is_open())
	{
		while (std::getline(file, buff))
			contents = contents + buff;
		file.close();
	}
	else
	{
		std::cout << "File could not be opened." << std::endl;
		return (0);
	}
	filename = filename + ".replace";
	file.open(filename.c_str(), ios::out | ios::in | ios::trunc);
	if(file.is_open())
	{
		contents = ft_replace(contents, s1, s2);
		file << contents;
		file.close();
	}
	else
	{
		std::cout << "Copy file could not be created." << std::endl;
		return (0);
	}
}