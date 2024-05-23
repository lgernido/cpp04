/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:20:22 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/23 13:46:39 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor

Ice::Ice() : AMateria()
{
    type = "ice";
    std::cout << BOLD << "Ice" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;  
}

//Destructor

Ice::~Ice()
{
    std::cout << BOLD << "Ice" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl;  
}

//Copy constructor

Ice::Ice(const Ice& other)
{
    this->type = other.getType();
    std::cout << BOLD << "Ice" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

/*ASSIGNMENT OPERATOR*/

Ice& Ice::operator=(const Ice& other)
{
    if (this == &other)
        return (*this);
    this->type = other.getType();
    return(*this);
}

/*PUBLIC METHODS*/

//Getter

std::string const& Ice::getType()const
{
    return(this->type);
}

AMateria *Ice::clone()const
{
    Ice *new_ice = new Ice;
    return (new_ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << CYAN << BOLD << " * shoots an ice bolt at  " << target.getName()  << " * " << RESET << std::endl;
}