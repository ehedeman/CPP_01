/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:37:41 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/04 14:47:35 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	variable = "HI THIS IS BRAIN";
	std::string *stringPTR = &variable;
	std::string & stringREF = variable;
	
	std::cout << 
	&variable << std::endl << 
	stringPTR << std::endl << 
	&stringREF <<
	std::endl;
	
	std::cout << std::endl;
	
	std::cout << 
	variable << std::endl << 
	*stringPTR << std::endl << 
	stringREF << 
	std::endl;
}