/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:53:08 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/08 16:38:10 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

void    president_working( void ) {
    std::cout << "\033[0;34m";
    Bureaucrat  Charles( "Charles", 1 );
    PresidentialPardonForm   president( "jorges" );

    try {
        president.beSigned( Charles );
        president.execute( Charles );
    }
    catch ( std::exception& e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    president_not_working( void ) {
    std::cout << "\033[0;34m";
    Bureaucrat  Charles( "Charles", 1 );
    Bureaucrat  Guy( "Guy", 150 );
    PresidentialPardonForm   president( "garden" );

    try {
        president.execute( Charles );
    }
    catch ( std::exception& e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "\033[0;31m------------------------------------------\033[0m" << std::endl << std::endl;

    try {
        president.beSigned( Charles );
        president.execute( Guy );
    }
    catch ( std::exception& e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    robot_working( void ) {
    std::cout << "\033[0;34m";
    Bureaucrat  Charles( "Charles", 1 );
    RobotomyRequestForm   robot( "transformer" );

    try {
        Charles.signForm( robot );
        Charles.executeForm( robot );
    }
    catch ( std::exception& e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    robot_not_working( void ) {
    std::cout << "\033[0;34m";
    Bureaucrat  Charles( "Charles", 1 );
    Bureaucrat  Guy( "Guy", 150 );
    RobotomyRequestForm   robot( "garden" );

    try {
        robot.execute( Charles );
    }
    catch ( std::exception& e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "\033[0;31m------------------------------------------\033[0m" << std::endl << std::endl;

    try {
        robot.beSigned( Charles );
        robot.execute( Guy );
    }
    catch ( std::exception& e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    shrub_working( void ) {
    std::cout << "\033[0;34m";
    Bureaucrat  Charles( "Charles", 1 );
    ShrubberyCreationForm   shrub( "garden" );

    try {
        shrub.beSigned( Charles );
        shrub.execute( Charles );
    }
    catch ( std::exception& e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

void    shrub_not_working( void ) {
    std::cout << "\033[0;34m";
    Bureaucrat  Charles( "Charles", 1 );
    Bureaucrat  Guy( "Guy", 150 );
    ShrubberyCreationForm   shrub( "garden" );

    try {
        shrub.execute( Charles );
    }
    catch ( std::exception& e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "\033[0;31m------------------------------------------\033[0m" << std::endl << std::endl;

    try {
        shrub.beSigned( Charles );
        shrub.execute( Guy );
    }
    catch ( std::exception& e ) {
        std::cout << "\033[0m";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0;34m";
}

int main( void ) {
    srand( time( NULL ) );

    std::cout << "\033[0;32mShrubberyCreationForm: \033[0m" << std::endl;
    shrub_working();
    std::cout << std::endl;
    
    std::cout << "\033[0;32mRobotomyRequestForm: \033[0m" << std::endl;
    robot_working();
    std::cout << std::endl;

    std::cout << "\033[0;32mPresidentialPardonForm: \033[0m" << std::endl;
    president_working();
    std::cout << std::endl;

    std::cout << "\033[0;32mShrubberyCreationForm not working: \033[0m" << std::endl;
    shrub_not_working();
    std::cout << std::endl;

    std::cout << "\033[0;32mRobotomyRequestForm not working: \033[0m" << std::endl;
    robot_not_working();
    std::cout << std::endl;

    std::cout << "\033[0;32mPresidentialPardonForm not working: \033[0m" << std::endl;
    president_not_working();
    std::cout << std::endl;
    
    return ( 0 );
}
