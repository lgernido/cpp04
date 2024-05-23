/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:18:42 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/23 13:32:04 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

/*OPERATORS & DESTRUCTORS*/

//Default Operator

Cat::Cat() : Animal()
{
    brain = new Brain();
    std::cout << BOLD << "Cat" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;   
}

//Default destructor
Cat::~Cat()
{
    delete brain;
    std::cout << BOLD << "Cat" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Copy constructor
Cat::Cat(const Cat& aCat)
{
    this->brain = new Brain(*aCat.brain);
    this->type = aCat.getType();
    std::cout << BOLD << "Cat" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Name constructor
Cat::Cat(std::string type)
{
    this->type = type;
    this->name = type;
    std::cout << BOLD << "Cat" << RESET << ITALIC << " name constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

/*ASSIGNEMENT OPERATOR*/

Cat& Cat::operator=(const Cat& aCat)
{
    if (this == &aCat)
        return (*this);
    this->type = aCat.getType();
    if (this->brain != NULL)
        delete (this->brain);
    this->brain = new Brain(*aCat.brain);
    return(*this);
}

/*PUBLIC METHODS*/

void Cat::makeSound(void) const
{
    std::cout << MAGENTA << BOLD << "* soft meowing and purring *" << RESET << std::endl;
    std::cout << std::endl;
}

std::string Cat::getIdeas(int index)
{
    return (this->brain->getIdeas(index));
}

void Cat::setIdeas(std::string idea)
{
    this->brain->setIdeas(idea);
}