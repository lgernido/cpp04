/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:05:36 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/23 13:31:30 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*OPERATORS & DESTRUCTORS*/

//Default Operator

Animal::Animal()
{
    std::cout << BOLD << "Animal" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;   
}

//Default destructor
Animal::~Animal()
{
    std::cout << BOLD << "Animal" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Copy constructor
Animal::Animal(const Animal& anAnimal)
{
    this->type = anAnimal.getType();
    std::cout << BOLD << "Animal" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}


/*ASSIGNEMENT OPERATOR*/

Animal& Animal::operator=(const Animal& anAnimal)
{
    if (this == &anAnimal)
        return (*this);
    
    this->type = anAnimal.getType();
    return(*this);
}

/*PUBLIC METHODS*/

void Animal::makeSound(void)const
{
    std::cout << CYAN << BOLD << "* Undefined animal noise *" << RESET << std::endl;
    std::cout << std::endl;
}

//Getters

std::string Animal::getType(void)const
{
    return(this->type);
}