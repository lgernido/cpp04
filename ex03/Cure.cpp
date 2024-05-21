/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:25:36 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/21 09:05:32 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor

Cure::Cure()
{
    this->type = "cure";
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

Cure::Cure(const Cure& copy)
{
    this->type = copy.getType();
    std::cout << BOLD << "Cure" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

/*OPERATOR OVERLOARD*/

Cure& Cure::operator=(const Cure& copy)
{
    if (this == &copy)
        return (*this);
    this->type = copy.getType();
    return(*this);
}

/*PUBLIC METHODS*/

//Getter
std::string const& Cure::getType()const
{
    return(this->type);
}

Cure *Cure::clone()const
{
    Cure *new_cure = new Cure;
    return(new_cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}