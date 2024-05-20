/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:20:24 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 15:24:45 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        ~Ice();

        Ice(const Ice& copy);
        
        Ice& operator=(const Ice& copy);

    protected :

    private :
}