/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:34:38 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 14:48:10 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*OPERATORS & DESTRUCTORS*/

//Default Operator

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "I have no idea what to do";
    std::cout << BOLD << "Brain" << RESET << ITALIC << " default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;   
}

//Default destructor
Brain::~Brain()
{
    std::cout << BOLD << "Brain" << RESET << ITALIC << " destructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Copy constructor
Brain::Brain(const Brain& aBrain)
{
    // this->ideas = aBrain.getIdeas();
    (void)aBrain;
    std::cout << BOLD << "Brain" << RESET << ITALIC << " copy constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}


/*OPERATOR OVERLOARD*/

Brain& Brain::operator=(const Brain& aBrain)
{
    if (this == &aBrain)
        return (*this);
    
    return(*this);
}

/*PUBLIC METHODS*/

//Getters

std::string Brain::getIdeas(int index)
{
    return (this->ideas[index]);
}

//Setter

void Brain::setIdeas(std::string idea)
{
    for (int i = 0; i < 100; i++)
    {
        if (this->ideas[i].compare("I have no idea what to do") != 0)
            i++;
        else
        {
            this->ideas[i] = idea;
            break;
        }
    }
}