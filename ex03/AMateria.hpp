/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:05:47 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/21 12:17:23 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

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
#define RESET      "\033[0m"

class ICharacter;

class AMateria
{
    public :
        AMateria();
        virtual ~AMateria();
        
        AMateria(std::string const type);
        AMateria(const AMateria& copy);

        AMateria& operator=(const AMateria& copy);
        
        std::string const& getType()const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected :
        std::string type;
        
    private : 

};

#endif