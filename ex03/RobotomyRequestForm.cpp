/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:43:35 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/12 12:38:01 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "Default", 72, 45) {
    std::cout << "RobotomyRequestForm: " << this->getName() << " default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form( "robotomy request", 72, 45 ), _target( target ) {
    std::cout << "RobotomyRequestForm: " << this->getName() << " constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& cp ) {
    *this = cp;
}

void    RobotomyRequestForm::execute( const Bureaucrat& executor ) const {
    if ( findException( executor, *this ) ) {
        std::cout << "Bbbzzzzzz" << std::endl << "Kkkrriiii" << std::endl;
        int randomNb = rand() % 2;
        if ( randomNb )
            std::cout << this->_target << " was robotomized successfully!" << std::endl;
        else
            std::cout << this->_target << " was built like Ikea furniture (not properly)" << std::endl;
    }
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm: " << this->getName() << " destructor called" << std::endl;
}

//can't copy because attributes are private in abstract parent class
RobotomyRequestForm&  RobotomyRequestForm::operator=( const RobotomyRequestForm& rhs ) {
    ( void )rhs;
    return ( *this );
}
