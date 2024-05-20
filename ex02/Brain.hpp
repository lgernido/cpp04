/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:34:49 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 13:30:06 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include "Cat.hpp"


class Brain
{
    public :
        Brain();
        ~Brain();

        Brain(const Brain& aBrain);

        Brain& operator=(const Brain& aBrain);

        // std::string getIdeas(void) const[100];

    protected : 

    private :
        std::string ideas[100];
};


#endif