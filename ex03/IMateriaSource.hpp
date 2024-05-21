/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:14:08 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/21 12:13:15 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
    public :
        virtual ~IMateriaSource(){};
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const& type) = 0;
};


#endif