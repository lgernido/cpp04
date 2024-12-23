/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:39:43 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/22 16:17:10 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"


class Character : public ICharacter
{
    public :
        Character();
        ~Character();

        Character(std::string name);
        Character(Character const& other);

        Character& operator=(Character const& other);

        std::string const& getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

    protected :

    private :
        AMateria *inventory[4];
        std::string const name;
};



#endif