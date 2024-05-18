/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:19:08 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/18 10:54:34 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        ~Dog();

        Dog(const Dog& aDog);

        Dog& operator=(const Dog& aDog);

        Dog(std::string type);
        void makeSound(void)const;

    protected :

    private :
        std::string name;
};


#endif