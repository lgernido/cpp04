/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:25:54 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/22 12:09:22 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public : 
        Cure();
        ~Cure();

        Cure(const Cure& copy);
        
        Cure& operator=(const Cure& copy);
        
        std::string const& getType()const ;
        AMateria *clone() const;
        void use (ICharacter& target);
        
    
    protected : 
    
    private :    
};

#endif