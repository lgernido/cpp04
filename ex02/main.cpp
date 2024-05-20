/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:28:55 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 15:03:45 by lgernido         ###   ########.fr       */
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

        // Animal* doom_to_fail = new Animal();

        // doom_to_fail->makeSound();
        // delete doom_to_fail;
    }
    {
        /*Testing Cat and Dog instances*/

        Dog *doggo = new Dog();
        Cat *kitty = new Cat();

        kitty->makeSound();
        doggo->makeSound();

        delete doggo;
        delete kitty;
    }

    return 0;
}