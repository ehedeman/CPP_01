/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:59:09 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/05 12:53:53 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &woppie;
	std::string	name;
public:
	HumanA(std::string name, Weapon &woppie);
	~HumanA();

	// void	setWeapon(class Weapon &woppie);
	// void	setName(std::string name);

	// class Weapon getWeapon();
	// std::string	getName();

	void	attack();
};

#endif