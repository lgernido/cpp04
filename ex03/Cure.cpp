/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:25:36 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/22 16:18:28 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor

Cure::Cure() : AMateria()
{
    type = "cure";
    std::cout << BOLD << "Cure" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;  
}

//Destructor

Cure::~Cure()
{
    std::cout << BOLD << "Cure" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl;  
}

//Copy constructor

Cure::Cure(const Cure& other)
{
    this->type = other.getType();
    std::cout << BOLD << "Cure" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

/*OPERATOR OVERLOARD*/

Cure& Cure::operator=(const Cure& other)
{
    if (this == &other)
        return (*this);
    this->type = other.getType();
    return(*this);
}

/*PUBLIC METHODS*/

//Getter
std::string const& Cure::getType()const
{
    return(this->type);
}

AMateria *Cure::clone()const
{
    Cure *new_cure = new Cure;
    return(new_cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << GREEN << BOLD << " * heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}