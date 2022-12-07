/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:53:12 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/07 14:35:15 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "Default" ), _grade( 150 ) {
    std::cout << "Bureaucrat: " << this->_name << " default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ), _grade( grade ) {
    if ( this->_grade > 150 )
        throw ( GradeTooLowException() );
    else if ( this->_grade < 1 )
        throw ( GradeTooHighException() );
    std::cout << "Bureaucrat: " << this->_name << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& cp ) {
    *this = cp;
}

std::string Bureaucrat::getName( void ) const {
    return ( this->_name );
}

int Bureaucrat::getGrade( void ) const {
    return ( this->_grade );
}

void        Bureaucrat::incrementGrade( void ) {
    this->_grade -= 1;
    if ( this->_grade < 1 )
        throw ( GradeTooHighException() );
    std::cout << "Bureaucrat: " << this->_name << " grade increment called" << std::endl;
}

void        Bureaucrat::decrementGrade( void ) {
    this->_grade += 1;
    if ( this->_grade > 150 )
        throw ( GradeTooLowException() );
    std::cout << "Bureaucrat: " << this->_name << " grade decrement called" << std::endl;
}

void        Bureaucrat::signForm( Form& form ) {
    if ( form.getSigned() )
        std::cout << this->_name << " couldn't sign " << form.getName() << "because form is already signed" << std::endl;
    else if ( this->_grade <= form.getSignGrade() ) {
        form.beSigned( *this );
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    else
        throw ( GradeTooLowException() );
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat: " << this->_name << " destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& rhs ) {
    this->_name = rhs._name;
    this->_grade = rhs._grade;
    return ( *this );
}

std::ostream&    operator<<( std::ostream& o, const Bureaucrat& cp ) {
    o << cp.getName() << ", bureaucrat grade " << cp.getGrade() << ".";
    return ( o );
}
