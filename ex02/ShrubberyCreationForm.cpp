/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:40:13 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/07 16:08:30 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "Default", 145, 137) {
    std::cout << "ShrubberyCreationForm: " << this->getName() << " default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form( "shrubbery creation", 145, 137 ), _target( target ) {
    std::cout << "ShrubberyCreationForm: " << this->getName() << " constructor called" << std::endl;
}

// ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& cp ) {
//     *this = cp;
// }

void    ShrubberyCreationForm::execute( const Bureaucrat& executor ) const {
    if ( findException( executor, *this ) ) {
        std::ofstream   outfile( this->_target + "_shrubbery" );
        outfile << "\n\
                 /\\\n\
                <  >\n\
                 \\/\n\
                 /\\\n\
                /  \\\n\
               /++++\\\n\
              /  ()  \\\n\
              /      \\\n\
             /~`~`~`~`\\\n\
            /  ()  ()  \\\n\
            /          \\\n\
           /*&*&*&*&*&*&\\\n\
          /  ()  ()  ()  \\\n\
          /              \\\n\
         /++++++++++++++++\\\n\
        /  ()  ()  ()  ()  \\\n\
        /                  \\\n\
       /~`~`~`~`~`~`~`~`~`~`\\\n\
      /  ()  ()  ()  ()  ()  \\\n\
      /*&*&*&*&*&*&*&*&*&*&*&\\\n\
     /                        \\\n\
    /,.,.,.,.,.,.,.,.,.,.,.,.,.\\\n\
               |   |\n\
              |`````|\n\
              \\_____/" << std::endl;
        outfile.close();
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm: " << this->getName() << " destructor called" << std::endl;
}

// ShrubberyCreationForm&  ShrubberyCreationForm::operator=( const ShrubberyCreationForm& rhs ) {
    
// }