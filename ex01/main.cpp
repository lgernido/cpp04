/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:28:55 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/23 08:44:39 by lgernido         ###   ########.fr       */
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
        std::cout << GREEN <<"BASIC TEST FROM THE SUBJECT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
          
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;//should not create a leak
        delete i;
	    std::cout << GREEN << "---------------------------------------------------" RESET << std::endl;
    }
    {
        /*Required test by the subject*/
        std::cout << GREEN <<"FILLING A TAB WITH HALF CAT/HALF DOG:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        
        Animal* house[10];
        for (int i = 0; i < 5; i++)
            house[i] = new Dog();
        for (int i = 5; i < 10; i++)
            house[i] = new Cat();
        for (int i = 0; i < 10; i++)
            house[i]->makeSound();
        for (int i = 0; i < 10; i++)
        {
            delete house[i];
        }
            
	    std::cout << GREEN << "---------------------------------------------------" RESET << std::endl;
    }
    {
        /*Testing ideas attribute*/
        
        std::cout << GREEN <<"TESTING IDEAS ATTRIBUTES:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Dog* doggo = new Dog();

        doggo->setIdeas("Attack the postman");
        doggo->setIdeas("Poop on the carpet");
        doggo->makeSound();
        std::cout << RED << BOLD << doggo->getIdeas(0) << RESET << std::endl;
        std::cout << std::endl;
        std::cout << RED << BOLD << doggo->getIdeas(1) << RESET << std::endl;
        std::cout << std::endl;
        std::cout << GREEN << BOLD << doggo->getIdeas(2) << RESET << std::endl;
        std::cout << std::endl;

        delete doggo;
	    std::cout << GREEN << "---------------------------------------------------" RESET << std::endl;
        
    }
    return 0;
}