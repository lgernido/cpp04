/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:26:33 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/22 16:20:44 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	{
		// std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		// std::cout <<"BASIC TEST:" << std::endl;
	    // std::cout << "---------------------------------------------------" RESET << std::endl;
	    // std::cout << std::endl;

		// /*Checking the right order of constructors and how learning materias works*/
	    // std::cout << GREEN "CONSTRUCTORS:" << std::endl;
	    // std::cout << "---------------------------------------------------" RESET << std::endl;
		
		// IMateriaSource *materia_book = new MateriaSource();
		// ICharacter *Lebron = new Character("Lebron");
		
		// materia_book->learnMateria(new Ice());
		// materia_book->learnMateria(new Cure());
		// std::cout << std::endl;
		
		// /*Creating materia based on the ones that have been learned.
		// Trying to create a Materia that hasn't been learned*/
		
	    // std::cout << GREEN "CREATE MATERIA:" << std::endl;
	    // std::cout << "---------------------------------------------------" RESET << std::endl;
	    // AMateria	*ice;
	    // AMateria	*cure;
	    // ice = materia_book->createMateria("ice");
	    // Lebron->equip(ice);
	    // cure = materia_book->createMateria("cure");
	    // Lebron->equip(cure);
	    // ice = materia_book->createMateria("block"); // null
	    // Lebron->equip(ice);
	    // std::cout << std::endl;
		
		// /*Targeting a new Character with the Materias that are learned*/
		
	    // std::cout << GREEN "USE ON A NEW CHARACTER:" << std::endl;
	    // std::cout << "---------------------------------------------------" RESET << std::endl;
	    // ICharacter* Kobe = new Character("Kobe");
	    // Lebron->use(0, *Kobe);
	    // Lebron->use(1, *Kobe);
	    // std::cout << std::endl;
	    // Lebron->use(2, *Kobe); 
	    // Lebron->use(-4, *Kobe);
	    // Lebron->use(18, *Kobe);
	    // std::cout << std::endl;
		
	    // std::cout << GREEN "DEEP COPY CHARACTER:" << std::endl;
	    // std::cout << "---------------------------------------------------" RESET << std::endl;
	    // Character	*Magic = new Character("Magic");
	    // Character	*Magic_copy = new Character(*Magic);
	    // std::cout << std::endl; 
		
	    // /*Deep copy vs its source character*/
		
	    // std::cout << GREEN "DEEP COPY VS SOURCE:" << std::endl;
	    // std::cout << "---------------------------------------------------" RESET << std::endl;
	    // Magic->unequip(0); // this shows that they have different materia pointers equipped
	    // Magic_copy->equip(cure);
	    // Magic_copy->equip(ice);
	    // std::cout << std::endl; 

	    // Magic->use(0, *Kobe);
	    // Magic->use(1, *Kobe);
	    // Magic->use(2, *Kobe);
	    // Magic->use(3, *Kobe);
	    // std::cout << std::endl;
	    // Magic_copy->use(0, *Kobe);
	    // Magic_copy->use(1, *Kobe);
	    // Magic_copy->use(2, *Kobe);
	    // Magic_copy->use(3, *Kobe);
	    // std::cout << std::endl; 

		// /*Testing the unequip function */
	    // std::cout << GREEN "UNEQUIP:" << std::endl;
	    // std::cout << "---------------------------------------------------" RESET << std::endl;
	    // Lebron->unequip(-1); // unequip an empty / non existing slot in inventory
	    // Lebron->unequip(18);
	    // Lebron->unequip(3);
	    // std::cout << std::endl;
	    // Lebron->use(1, *Magic);
	    // Lebron->unequip(1); // Unequip a valid slot in inventory (cure unequipped)
	    // Lebron->use(1, *Magic);
	    // std::cout << std::endl; 

		// /*Freeing memory, checking the order of destructors*/
		
	    // std::cout << GREEN "DESTRUCTORS:" << std::endl;
	    // std::cout << "---------------------------------------------------" RESET << std::endl;
	    // delete Kobe;
	    // delete Lebron;
	    // delete materia_book;
	    // delete Magic;
	    // delete Magic_copy;
	    // std::cout << std::endl;
	}
    { 
	    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		/*Trying to put too much stuff in inventory*/
		
		std::cout <<"TEST OVERLOADING INVENTORIES:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        MateriaSource *materia_book = new MateriaSource();
	
		std::cout << std::endl << GREEN "LEARNING NEW MATERIAS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
	    materia_book->learnMateria(new Ice());
	    materia_book->learnMateria(new Cure());
        materia_book->learnMateria(new Ice());

		std::cout << std::endl << GREEN "TESTING COPY OPERATOR:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        MateriaSource *materia_book2 = new MateriaSource(*materia_book);
		
		std::cout << std::endl << GREEN "OVERLOADING MATERIA SOURCE:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        materia_book2->learnMateria(new Ice());
		AMateria *ice = new Ice();
        materia_book2->learnMateria(ice);//this one cannot be added
        materia_book->learnMateria(new Ice());//shows that they are different ptrs
	
        std::cout << std::endl << GREEN "CREATING NEW CHARACTER TO OVERLOAD:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
		Character *Lebron = new Character("Lebron");
	
		std::cout << std::endl << GREEN "CREATING NEW MATERIAS TO PUT INSIDE THE INVENTORY:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        AMateria *ice0 = materia_book2->createMateria("cure");
        AMateria *ice1 = materia_book2->createMateria("cure");
        AMateria *ice2 = materia_book2->createMateria("ice");
        AMateria *ice3 = materia_book2->createMateria("ice");
        AMateria *ice4 = materia_book2->createMateria("ice");
	
        Lebron->equip(ice0);
        Lebron->equip(ice1);
        Lebron->equip(ice2);
        Lebron->equip(ice3);
        Lebron->equip(ice4);//this one cannot be equipped

		std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        delete materia_book;
        delete materia_book2;
        delete Lebron;
		delete ice4;
		delete ice;
    }
}