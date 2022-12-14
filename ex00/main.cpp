/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:53:08 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/07 11:33:15 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    tooHigh() {
    std::cout << "\033[0;34m";
    try {
        Bureaucrat  Jean( "Jean", 0 );
    }
    catch ( std::exception & e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    tooLow() {
    std::cout << "\033[0;34m";
    try {
        Bureaucrat  Guy( "Guy", 151 );
    }
    catch ( std::exception & e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    tooHighIncrement() {
    std::cout << "\033[0;34m";
    Bureaucrat  Ginette( "Ginette", 2 );
    try {
        std::cout << Ginette.getName() << "'s grade is: "  << Ginette.getGrade() << std::endl;
        Ginette.incrementGrade();
        std::cout << Ginette.getName() << "'s grade is: "  << Ginette.getGrade() << std::endl;
        Ginette.incrementGrade();
    }
    catch ( std::exception & e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    tooLowDecrement() {
    std::cout << "\033[0;34m";
    Bureaucrat  Nicole( "Nicole", 149 );
    try {
        std::cout << Nicole.getName() << "'s grade is: "  << Nicole.getGrade() << std::endl;
        Nicole.decrementGrade();
        std::cout << Nicole.getName() << "'s grade is: "  << Nicole.getGrade() << std::endl;
        Nicole.decrementGrade();
    }
    catch ( std::exception & e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

int main( void ) {
    std::cout << "\033[0;32mAssign grade to 0: \033[0m" << std::endl;
    tooHigh();
    std::cout << std::endl;
    std::cout << "\033[0;32mAssign grade to 151: \033[0m" << std::endl;
    tooLow();
    std::cout << std::endl;
    std::cout << "\033[0;32mIncrement grade from 2 to 0: \033[0m" << std::endl;
    tooHighIncrement();
    std::cout << std::endl;
    std::cout << "\033[0;32mDecrement grade from 149 to 151: \033[0m" << std::endl;
    tooLowDecrement();
    std::cout << std::endl;
    return ( 0 );
}
