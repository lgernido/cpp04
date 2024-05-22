/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:20:24 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/22 16:18:43 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        ~Ice();

        Ice(const Ice& other);
        
        Ice& operator=(const Ice& other);

        std::string const& getType() const;
        AMateria *clone() const;
        void use(ICharacter& target);

    protected :

    private :
};

#endif