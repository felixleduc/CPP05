/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:40:24 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/12 13:16:06 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
    std::cout << "Intern: constructor called" << std::endl;
}

Intern::Intern( const Intern& cp ) {
    *this = cp;
}

Form*   Intern::makeForm( std::string form_name, std::string form_target ) {
    Form    *form;
    int          i;
    std::string  name[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };

    for ( i = 0; i < 3; i++ )
      if ( name[i].compare( form_name ) == 0 )
        break ;
    switch ( i ) {
      case 0:
        form = new ShrubberyCreationForm( form_target );
        break ;
      case 1:
        form = new RobotomyRequestForm( form_target );
        break ;
      case 2:
        form = new PresidentialPardonForm( form_target );
        break ;
      default:
        form = NULL;
    };
    if ( form != NULL )
        std::cout << "Intern creates " << form_name << std::endl;
    else
        std::cout << "Form \"" << form_name << "\" does not exist" << std::endl;
    return ( form );
}

Intern::~Intern() {
    std::cout << "Intern: destructor called" << std::endl;
}

Intern& Intern::operator=( const Intern& rhs ) {
    ( void )rhs;
    return ( *this );
}
