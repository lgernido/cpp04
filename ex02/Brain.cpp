/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:34:38 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 13:30:36 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*OPERATORS & DESTRUCTORS*/

//Default Operator

Brain::Brain()
{
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

// std::string Brain::getIdeas(void) const[100]
// {
//     return (this->ideas);
// }