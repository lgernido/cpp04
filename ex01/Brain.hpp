/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:34:49 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/18 12:38:03 by lgernido         ###   ########.fr       */
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

    protected : 

    private :
        std::string ideas[100];
};


#endif