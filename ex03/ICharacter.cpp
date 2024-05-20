/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:29:02 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 15:56:08 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

/*CONSTRUCTOR & DESTRUCTOR*/

//Default constructor

ICharacter::ICharacter()
{ 
    std::cout << BOLD << "ICharacter" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl; 
}

//Destructor

ICharacter::~ICharacter()
{
    std::cout << BOLD << "ICharacter" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl; 
} 