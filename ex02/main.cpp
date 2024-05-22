/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:28:55 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/22 14:49:23 by lgernido         ###   ########.fr       */
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
        /*Testing Animal instance*/
        /*This test won't compile because the animal class can't be called*/

        Animal* doom_to_fail = new Animal();

        doom_to_fail->makeSound();
        delete doom_to_fail;
    }
    {
        /*Testing Cat and Dog instances*/
        /*This test works because Dog and Cat classes can be called*/

        Animal *doggo = new Dog();
        Animal *kitty = new Cat();

        kitty->makeSound();
        doggo->makeSound();

        delete doggo;
        delete kitty;
    }

    return 0;
}