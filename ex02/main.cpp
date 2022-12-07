/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:53:08 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/07 16:31:35 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main( void ) {
    Bureaucrat  Guy( "Guy", 1 );
    Bureaucrat  Charles( "Charles", 150 );
    ShrubberyCreationForm   test( "jardin" );
    
    try {
        test.beSigned( Guy );
        Charles.executeForm( test );
    }
    catch ( std::exception& e ) {
        std::cerr << e.what() << std::endl;
    }
    return ( 0 );
}
