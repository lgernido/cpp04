/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:47:20 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/21 12:17:46 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default constructor
Character::Character()
{
    for (int i = 0; i < 4; i++)
    {
        (this->inventory)[i] = 0;
    }
    std::cout << BOLD << "Character" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl; 
}

//Destructor
Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    std::cout << BOLD << "Character" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Copy constructor
Character::Character(Character const& copy)
{
    for (int i = 0; i < 4; i++)
    {
        if(copy.inventory[i])
        {
            this->inventory[i] = copy.inventory[i]->clone();
        }
    }
    std::cout << BOLD << "Character" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Name constructor
Character::Character(std::string name) : name(name)
{
    for(int i = 0; i < 4; i++)
        (this->inventory)[i] = 0;
    std::cout << BOLD << "Character" << RESET << ITALIC << " name constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

/*OPERATOR OVERLOAD*/

Character& Character::operator=(Character const& copy)
{
    for(int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        if (copy.inventory[i])
            this->inventory[i] = copy.inventory[i]->clone();
    }
    return (*this);
}

/*PUBLIC METHODS*/

//Getter

std::string const& Character::getName() const
{
    return(this->name);
}

void Character::equip(AMateria *m)
{
    int i = 0;
    if (!m)
    {
        std::cout << this->name << " tried to equip a materia that doesn't exist" << std::endl;
        return ;
    }
    while((this->inventory[i]) != 0 && i < 4)
        i++;
    if (i >= 4)
    {
        std::cout << this->name << " can't equipe more than 4 materias" << std::endl;
        return;
    }
    this->inventory[i] = m;
    std::cout << this->name << " equiped " << m->getType() << " materia" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << this->name << " tried to unequip nothing at slot " << idx << std::endl;
    } 
    else if (!(this->inventory)[idx])
    {
        std::cout << this->name << " tried to unequiped nothing at slot " << idx << std::endl;
    }
    else
    {
        AMateria *materia = (this->inventory)[idx];
        std::cout << this->name << " unequiped " << materia->getType() << " at slot " << idx << std::endl;
        (this->inventory)[idx] = 0;
    }
}

void Character::use(int idx, ICharacter& target)
{
    std::string name = this->getName();
    if (idx < 0 || idx >= 4 || !(this->inventory)[idx])
    {
        std::cout << "nothing found to use at slot " << idx << std::endl;
        return ;
    }
    std::cout << name;
    ((this->inventory)[idx])->use(target);
}
