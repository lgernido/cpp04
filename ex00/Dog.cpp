/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:18:44 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/18 13:10:53 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*OPERATORS & DESTRUCTORS*/

//Default Operator

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << BOLD << "Dog" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;   
}

//Default destructor
Dog::~Dog()
{
    std::cout << BOLD << "Dog" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Copy constructor
Dog::Dog(const Dog& aDog)
{
    this->type = aDog.getType();
    std::cout << BOLD << "Dog" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Name constructor
Dog::Dog(std::string type)
{
    this->type = type;
    this->name = type;
    std::cout << BOLD << "Dog" << RESET << ITALIC << " name constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

/*OPERATOR OVERLOARD*/

Dog& Dog::operator=(const Dog& aDog)
{
    if (this == &aDog)
        return (*this);
    
    this->type = aDog.getType();
    return(*this);
}

/*PUBLIC METHODS*/

void Dog::makeSound(void)const
{
    std::cout << YELLOW << BOLD << "* aggressive barking and growling *" << RESET << std::endl;
    std::cout << std::endl;
}