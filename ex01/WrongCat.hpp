/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:02:52 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/18 11:04:10 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        ~WrongCat();

        WrongCat(const WrongCat& aWrongCat);

        WrongCat& operator=(const WrongCat& aWrongCat);

        WrongCat(std::string type);
        void makeSound(void) const;

    protected :

    private :
        std::string name;
};


#endif