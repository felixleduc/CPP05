/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:53:08 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/07 15:56:35 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

void    FormGradeTooHigh() {
    std::cout << "\033[0;34m";
    try {
        Form  GoogleForm( "GoogleForm", 0, 10 );
    }
    catch ( std::exception & e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    FormGradeTooLow() {
    std::cout << "\033[0;34m";
    try {
        Form  loi101( "loi101", 151, 10 );
    }
    catch ( std::exception & e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    FormSign() {
    std::cout << "\033[0;34m";
    try {
        Bureaucrat  Guy( "Guy", 8 );
        Form        disclosureAgreement( "disclosureAgreement", 10, 10 );

        Guy.signForm( disclosureAgreement );
    }
    catch ( std::exception & e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    FormSignTooLow() {
    std::cout << "\033[0;34m";
    Bureaucrat  Ginette( "Ginette", 50 );
    Form        disclosureAgreement( "disclosureAgreement", 10, 10 );
    try {
        Ginette.signForm( disclosureAgreement );
    }
    catch ( std::exception & e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    FormAlreadySigned() {
    std::cout << "\033[0;34m";
    try {
        Bureaucrat  Ginette( "Ginette", 50 );
        Bureaucrat  Guy( "Guy", 10 );
        Form        disclosureAgreement( "disclosureAgreement", 100, 10 );

        Ginette.signForm( disclosureAgreement );
        std::cout << "\033[0;34m";
        Guy.signForm( disclosureAgreement );
    }
    catch ( std::exception & e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

int main( void ) {
    std::cout << "\033[0;32mAssign sign grade to 0: \033[0m" << std::endl;
    FormGradeTooHigh();
    std::cout << std::endl;
    std::cout << "\033[0;32mAssign sign grade to 151: \033[0m" << std::endl;
    FormGradeTooLow();
    std::cout << std::endl;
    std::cout << "\033[0;32mSign Form: \033[0m" << std::endl;
    FormSign();
    std::cout << std::endl;
    std::cout << "\033[0;32mGrade too low to sign form: \033[0m" << std::endl;
    FormSignTooLow();
    std::cout << std::endl;
    std::cout << "\033[0;32mForm already signed: \033[0m" << std::endl;
    FormAlreadySigned();
    std::cout << std::endl;
    return ( 0 );
}
