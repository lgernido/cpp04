/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:16:36 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/22 09:10:47 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public :
        MateriaSource();
        MateriaSource(MateriaSource const& copy);
        ~MateriaSource();
        MateriaSource& operator=(MateriaSource const& copy);
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const& type);
        
    private :
        AMateria* (inventory[4]);
};

#endif