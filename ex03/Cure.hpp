/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:25:54 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 15:27:49 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Cure : public AMateria
{
    public : 
        Cure();
        ~Cure();

        Cure(const Cure& copy);
        
        Cure& operator=(const Cure& copy);
    
    protected : 
    
    private :    
}