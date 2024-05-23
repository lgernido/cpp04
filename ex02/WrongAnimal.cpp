/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:59:45 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/18 10:59:46 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*OPERATORS & DESTRUCTORS*/

//Default Operator

WrongAnimal::WrongAnimal()
{
    std::cout << BOLD << "WrongAnimal" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;   
}

//Default destructor
WrongAnimal::~WrongAnimal()
{
    std::cout << BOLD << "WrongAnimal" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& aWrongAnimal)
{
    this->type = aWrongAnimal.getType();
    std::cout << BOLD << "WrongAnimal" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

/*ASSIGNEMENT OPERATOR*/

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& aWrongAnimal)
{
    if (this == &aWrongAnimal)
        return (*this);
    
    this->type = aWrongAnimal.getType();
    return(*this);
}

/*PUBLIC METHODS*/

void WrongAnimal::makeSound(void)const
{
    std::cout << CYAN << BOLD << "* Undefined animal noise *" << RESET << std::endl;
    std::cout << std::endl;
}

//Getters

std::string WrongAnimal::getType(void)const
{
    return(this->type);
}