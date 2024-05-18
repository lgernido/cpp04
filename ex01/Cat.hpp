/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:19:11 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/18 11:39:10 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public :
        Cat();
        ~Cat();

        Cat(const Cat& aCat);

        Cat& operator=(const Cat& aCat);

        Cat(std::string type);
        void makeSound(void) const;

    protected :

    private :
        std::string name;
        Brain *brain;
};

#endif