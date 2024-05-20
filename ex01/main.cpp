/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:28:55 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 14:58:30 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {
        /*Testing basic initialization of all the classes (from the subject)*/
        
        // const Animal* j = new Dog();
        // const Animal* i = new Cat();
        // delete j;//should not create a leak
        // delete i;
    }
    {
        /*Required test by the subject*/
        
        // Animal* house[10];
        // for (int i = 0; i < 5; i++)
        //     house[i] = new Dog();
        // for (int i = 5; i < 10; i++)
        //     house[i] = new Cat();
        // for (int i = 0; i < 10; i++)
        //     house[i]->makeSound();
        // for (int i = 0; i < 10; i++)
        //     delete house[i];
    }
    {
        /*Testing ideas attribute*/
        
        Dog* doggo = new Dog();

        doggo->setIdeas("Attack the postman");
        doggo->makeSound();
        std::cout << RED << BOLD << doggo->getIdeas(0) << RESET << std::endl;
        std::cout << std::endl;
        std::cout << GREEN << BOLD << doggo->getIdeas(1) << RESET << std::endl;
        std::cout << std::endl;

        delete doggo;
        
    }

    return 0;
}