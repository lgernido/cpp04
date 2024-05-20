/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:19:08 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 14:29:21 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public :
        Dog();
        virtual ~Dog();

        Dog(const Dog& aDog);

        Dog& operator=(const Dog& aDog);

        Dog(std::string type);
        void makeSound(void)const;
        void setIdeas(std::string idea);
        std::string getIdeas(int index);

    protected :

    private :
        std::string name;
        Brain *brain;
};


#endif