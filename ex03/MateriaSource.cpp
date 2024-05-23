/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:19:50 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/23 13:46:53 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default constructor
MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        (this->inventory)[i] = 0;
    }
    std::cout << BOLD << "Materia source" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl; 
}

//Destructor
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->inventory[i];
    }
    std::cout << BOLD << "Materia source" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl; 
}

//Copy constructor
MateriaSource::MateriaSource(MateriaSource const& other)
{
    std::cout << BOLD << "Materia source" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl; 
    for (int i = 0; i < 4; i++)
    {
        if(other.inventory[i] != 0)
            this->inventory[i] = other.inventory[i]->clone();
        else
            this->inventory[i] = 0;
    }
}

/*ASSIGNEMENT OPERATOR*/
MateriaSource& MateriaSource::operator=(MateriaSource const& other)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        if (other.inventory[i])
            this->inventory[i] = (other.inventory[i])->clone();
    }
    return (*this);
}

/*PUBLIC METHODS*/

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    while(i < 4 && (this->inventory)[i] != 0)
        i++;
    if (i >= 4)
    {
        std::cout << RED << BOLD << " Can't learn more than 4 materias" << RESET << std::endl;
        std::cout << std::endl;
        return;
    }
    (this->inventory)[i] = m;
    std::cout << MAGENTA << BOLD << " * learned " << m->getType() << " materia * " << RESET << std::endl;
    std::cout << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    int i = 0;
    while(i < 4 && (this->inventory)[i] != 0 && ((this->inventory)[i])->getType() != type)
    {
        i++;
    }
    if(i >= 4 || !(this->inventory)[i])
    {
        std::cout << RED << "Materia of type " << type << " doesn't exist" << RESET << std::endl;
        std::cout << std::endl;
        return NULL;
    }
    std::cout << MAGENTA << BOLD << type << " created" << RESET << std::endl;
    std::cout << std::endl;
    return ((this->inventory)[i]->clone());
}

