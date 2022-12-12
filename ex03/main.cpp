/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:53:08 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/12 13:24:14 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

void    make_form( void ) {
    Intern  Georges;
    Form    *form;
    
    form = Georges.makeForm( "shrubbery creation", "garden" );
    free( form );
}

void    invalid_form( void ) {
    Intern  Georges;
    Form    *form;
    
    form = Georges.makeForm( "shrubbery", "garden" );
    free( form );
}

int main( void ) {
    srand( time( NULL ) );

    std::cout << "\033[0;32mShrubberyCreationForm: \033[0m" << std::endl;
    make_form();
    std::cout << std::endl;

    std::cout << "\033[0;32mShrubberyCreationForm: \033[0m" << std::endl;
    invalid_form();
    std::cout << std::endl;

    return ( 0 );
}
