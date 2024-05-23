/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:28:55 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/23 13:36:48 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {
        std::cout << GREEN <<"BASIC TEST FROM THE SUBJECT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();

        /*Added the deletes to prevent leaks*/
        delete meta;
        delete j;
        delete i;
	    std::cout << GREEN << "---------------------------------------------------" RESET << std::endl;

    }
    {
        std::cout << GREEN <<"TESTING THE WRONG ANIMAL:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output wrong sound
        meta->makeSound();
        
        delete meta;
        delete i;
	    std::cout << GREEN << "---------------------------------------------------" RESET << std::endl;
    }
    {
        std::cout  << GREEN <<"OTHER TEST :" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Animal* random = new Animal();
        Animal* dog = new Dog();
        Animal* cat = new Cat();

        std::cout << BOLD << random->getType() << " : "<< RESET;
        random->makeSound();
        std::cout << std::endl;
        std::cout << BOLD << dog->getType() << " : " << RESET;
        dog->makeSound();
        std::cout << std::endl;
        std::cout << BOLD << cat->getType() << " : "<< RESET;
        cat->makeSound();
        std::cout << std::endl;

        delete random;
        delete dog;
        delete cat;
	    std::cout << GREEN << "---------------------------------------------------" RESET << std::endl;
    }

    return 0;
}