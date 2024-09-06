/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:26:32 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/06 15:05:14 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:

    void debug( void );
    void info( void );
    void warning( void );
    void error (void);
    
public:

    Harl(/* args */);
    ~Harl();
    
    void complain( std::string level );
};
