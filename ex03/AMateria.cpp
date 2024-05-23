/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:05:44 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/23 13:45:22 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor

AMateria::AMateria()
{
    std::cout << BOLD << "AMateria" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;  
}

//Destructor

AMateria::~AMateria()
{
    std::cout << BOLD << "AMateria" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl;  
}

//Copy constructor

AMateria::AMateria(const AMateria& other)
{
    this->type = other.getType();
    std::cout << BOLD << "AMateria" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Type constructor

AMateria::AMateria(std::string const type) : type(type)
{
    std::cout << BOLD << "AMateria" << RESET << ITALIC << " type constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;  
}

/*ASSIGNEMENT OPERATOR*/

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this == &other)
        return (*this);
    this->type = other.getType();
    return(*this);
}

/*PUBLIC METHODS*/

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
}

//Getter
std::string const& AMateria::getType()const
{
    return(this->type);
}

