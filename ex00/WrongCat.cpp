/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:02:50 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/18 11:03:44 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*OPERATORS & DESTRUCTORS*/

//Default Operator

WrongCat::WrongCat() : WrongAnimal()
{
    type = "Wrong Cat";
    std::cout << BOLD << "WrongCat" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;   
}

//Default destructor
WrongCat::~WrongCat()
{
    std::cout << BOLD << "WrongCat" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Copy constructor
WrongCat::WrongCat(const WrongCat& aWrongCat)
{
    this->type = aWrongCat.getType();
    std::cout << BOLD << "WrongCat" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Name constructor
WrongCat::WrongCat(std::string type)
{
    this->type = type;
    this->name = type;
    std::cout << BOLD << "WrongCat" << RESET << ITALIC << " name constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

/*ASSIGNEMENT OPERATOR*/

WrongCat& WrongCat::operator=(const WrongCat& aWrongCat)
{
    if (this == &aWrongCat)
        return (*this);
    
    this->type = aWrongCat.getType();
    return(*this);
}

/*PUBLIC METHODS*/

void WrongCat::makeSound(void) const
{
    std::cout << MAGENTA << BOLD << "* soft meowing and purring *" << RESET << std::endl;
    std::cout << std::endl;
}