/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:19:50 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/21 16:36:16 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default constructor
MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = 0;
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
MateriaSource::MateriaSource(MateriaSource const& copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy.inventory[i])
        {
            this->inventory[i] = copy.inventory[i]->clone();
        }
    }
    std::cout << BOLD << "Materia source" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl; 
}

/*OPERATOR OVERLOAD*/
MateriaSource& MateriaSource::operator=(MateriaSource const& copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        if (copy.inventory[i])
            this->inventory[i] = copy.inventory[i]->clone();
    }
    return (*this);
}

/*PUBLIC METHODS*/

void MateriaSource::learnMateria(AMateria *m)
{   
    int i = 0;
    while((this->inventory)[i] != 0 && i < 4)
        i++;
    if (i >= 4)
    {
        std::cout << " Can't learn more than 4 materias" << std::endl;
        return;
    }
    if ((this->inventory)[])
    (this->inventory)[i] = m;
    std::cout << BOLD << MAGENTA << " * learned " << m->getType() << " materia * " << RESET << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    int i = 0;
    while(i < 4 && this->inventory[i] != 0 && this->inventory[i]->getType() != type)
    {
        i++;
    }
    if(i >= 4 || !(this->inventory)[i])
    {
        std::cout << "Materia of type " << type << " doesn't exist" << std::endl;
        return NULL;
    }
    std::cout << type << " learned" << std::endl;
    return ((this->inventory)[i]->clone());
}

