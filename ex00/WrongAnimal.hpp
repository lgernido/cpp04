/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:00:20 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/18 13:28:36 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include "Animal.hpp"

#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define ORANGE "\033[38;5;208m"
#define BLUE	"\033[0;34m"
#define MAGENTA	"\033[0;35m"
#define CYAN	"\033[0;36m"
#define WHITE	"\033[0;37m"
#define BOLD       "\033[1m"
#define UNDERLINE  "\033[4m"
#define ITALIC     "\033[3m"

class WrongAnimal
{
    public :
        WrongAnimal();
        ~WrongAnimal();
        
        WrongAnimal(const WrongAnimal& aWrongAnimal);

        WrongAnimal& operator=(const WrongAnimal& aWrongAnimal);

        void makeSound(void)const;
        std::string getType(void)const;

    protected :
        std::string type;
    
    private :
        
};

#endif