/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:29:06 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 15:32:42 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class ICharacter
{
    public :
        ICharacter();
        virtual ~ICharacter();

        virtual std::string const& getName()const = 0;
        virtual void equip(AMateria *m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0; 

        
    protected :

    private :
}