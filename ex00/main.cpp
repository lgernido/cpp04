/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:28:55 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 13:03:41 by lgernido         ###   ########.fr       */
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
        // const Animal* meta = new Animal();
        // const Animal* j = new Dog();
        // const Animal* i = new Cat();
        // std::cout << j->getType() << " " << std::endl;
        // std::cout << i->getType() << " " << std::endl;
        // i->makeSound(); //will output the cat sound!
        // j->makeSound();
        // meta->makeSound();
    }
    {
        // const WrongAnimal* meta = new WrongAnimal();
        // const Animal* j = new Dog();
        // const WrongCat* i = new WrongCat();
        // // std::cout << j->getType() << " " << std::endl;
        // // std::cout << i->getType() << " " << std::endl;
        // i->makeSound(); //will output the cat sound!
        // j->makeSound();
        // meta->makeSound(); 
    }
    {
        // Animal random = Animal();
        // Dog dog =  Dog();
        // Cat cat = Cat();

        // std::cout << BOLD << random.getType() << " : "<< RESET;
        // random.makeSound();
        // std::cout << std::endl;
        // std::cout << BOLD << dog.getType() << " : " << RESET;
        // dog.makeSound();
        // std::cout << std::endl;
        // std::cout << BOLD << cat.getType() << " : "<< RESET;
        // cat.makeSound();
        // std::cout << std::endl;

    }
    {
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
    }

    return 0;
}