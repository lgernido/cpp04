/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:25:36 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 15:27:56 by lgernido         ###   ########.fr       */
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