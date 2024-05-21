/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:29:06 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/21 10:22:42 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

/*Classe abstraite : Ne peut pas etre instanciee.
Si virtual au debut et = 0 a la fin --> fonction virtuelle pure
Les fonctions derivee de cette classe doivent donc implementer la fonction virtuelle pure.
*/

class ICharacter
{
    public :
        ICharacter(){};
        virtual ~ICharacter(){};

        virtual std::string const& getName()const = 0;
        virtual void equip(AMateria *m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0; 

        
    protected :

    private :
};

#endif