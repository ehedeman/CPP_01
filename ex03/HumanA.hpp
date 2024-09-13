/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:59:09 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/10 11:58:56 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

//using a pointer would work ig but reference makes more sense
class HumanA
{
private:
	Weapon &weapon;
	std::string	name;
public:
	HumanA(std::string name, Weapon &newweapon);
	~HumanA();

	void			setWeapon(class Weapon &weapon);
	void			setName(std::string name);

	class Weapon	getWeapon();
	std::string		getName();

	void	attack();
};

#endif