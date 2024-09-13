/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:59:13 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/13 13:30:59 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//the ":weapon(newweapon)" initialisiert die referenz bevor sie benuzt wird.
//weil das im konstruktor passiert ist das legal. ohne das ist der code fehlerhaft
HumanA::HumanA(std::string name, class Weapon &newweapon):weapon(newweapon) 
{
	this->name = name;
	this->weapon = newweapon;
}

HumanA::~HumanA()
{
}

void	HumanA::setName(std::string name)
{
	this->name = name;
}

void	HumanA::setWeapon(class Weapon &weapon)
{
	this->weapon = weapon;
}

std::string	HumanA::getName(){return(name);}
class Weapon	HumanA::getWeapon(){return(weapon);}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their weapon" << 
	this->weapon.getType() << std::endl;
}


// In der C++-Funktionserklärung, die du angegeben hast, handelt es sich 
// um einen Konstruktor für die Klasse HumanA. Der Teil: weapon(weapon)
// am Ende der Funktionsdeklaration ist eine Initialisierungsliste. 
// Hier ist, warum sie benötigt wird:

// 1. Initialisierung von Member-Variablen: In C++ ist es oft effizienter 
// 		und sicherer, Member-Variablen direkt in der Initialisierungsliste
// 		zu initialisieren, anstatt sie im Konstruktorkörper zuzuweisen.
// 		Dies ist besonders wichtig für Referenzen und konstante Member,
// 		die nicht ohne Initialisierung gesetzt werden können.

// 2. Referenzinitialisierung: In deinem Beispiel ist `weapon` eine Referenz
// 		auf ein `Weapon`-Objekt. Referenzen müssen beim Erstellen des Objekts
// 		initialisiert werden, und das geschieht hier in derInitialisierungsliste.
// 		Wenn du versuchen würdest, die Referenz im Konstruktorkörper zuzuweisen,
// 		würde das nicht funktionieren, da Referenzen nicht neu zugewiesen
//		werden können.

// 3. Klarheit: Die Verwendung einer Initialisierungsliste macht den Code
// 		klarer, da sofort ersichtlich ist, welche Member-Variablen mit
// 		welchen Werten initialisiert werden.

// Zusammengefasst: `: weapon(weapon)` initialisiert die Member-Variable
// `weapon` mit dem übergebenen Parameter `weapon`, was notwendig ist,
// um die Referenz korrekt zu setzen.