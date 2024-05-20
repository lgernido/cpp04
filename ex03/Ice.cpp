/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:20:22 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 15:25:09 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor

Ice::Ice()
{
    this->type = "ice";
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

Ice::Ice(const Ice& copy)
{
    this->type = copy.getType();
    std::cout << BOLD << "Ice" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

/*OPERATOR OVERLOARD*/

Ice& Ice::operator=(const Ice& copy)
{
    if (this == &copy)
        return (*this);
    this->type = copy.getType();
    return(*this);
}