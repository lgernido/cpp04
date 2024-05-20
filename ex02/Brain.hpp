/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:34:49 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 14:44:23 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include "Cat.hpp"
#include <cstring>


class Brain
{
    public :
        Brain();
        ~Brain();

        Brain(const Brain& aBrain);

        Brain& operator=(const Brain& aBrain);

        void setIdeas(std::string idea);
        std::string getIdeas(int index);

    protected : 

    private :
        std::string ideas[100];
};


#endif