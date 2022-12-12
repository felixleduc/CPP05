/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:36:32 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/07 16:19:04 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name( "Default" ), _signed( false ), _signGrade( 150 ), _execGrade( 150 ) {
    std::cout << "Form: " << this->_name << " default constructor called" << std::endl;
}

Form::Form( std::string name, int signGrade, int execGrade ) : _name( name ), _signed( false ), _signGrade( signGrade ), _execGrade( execGrade ) {
    exceptionSign();
    exceptionExec();
    std::cout << "Form: " << this->_name << " constructor called" << std::endl;
}

Form::Form( const Form& cp ) {
    *this = cp;
}

void        Form::exceptionSign( void ) {
    if ( this->_signGrade > 150 )
        throw ( GradeTooLowException() );
    else if ( this->_signGrade < 1 )
        throw ( GradeTooHighException() );
}

void        Form::exceptionExec( void ) {
    if ( this->_execGrade > 150 )
        throw ( GradeTooLowException() );
    else if ( this->_execGrade < 1 )
        throw ( GradeTooHighException() );
}

std::string Form::getName( void ) const {
    return ( this->_name );
}

bool        Form::getSigned( void ) const {
    return ( this->_signed );
}

int         Form::getSignGrade( void ) const {
    return ( this->_signGrade );
}

int         Form::getExecGrade( void ) const {
    return ( this->_execGrade );
}

void        Form::beSigned( Bureaucrat& bureaucrat ) {
    if ( bureaucrat.getGrade() <= this->_signGrade )
        this->_signed = true;
    else
        throw ( GradeTooLowException() );
}

int         Form::findException( const Bureaucrat& executor, const Form& executed ) const {
    if ( !this->getSigned() )
        throw ( FormNotSignedException() );
    else if ( executor.getGrade() >= executed.getExecGrade() )
        throw ( GradeTooLowException() );
    else
        return ( 1 );
    return ( 0 );
}

Form::~Form() {
    std::cout << "Form: " << this->_name << " destructor called" << std::endl;
}

Form&   Form::operator=( const Form& rhs ) {
    this->_name = rhs._name;
    this->_signed = rhs._signed;
    this->_signGrade = rhs._signGrade;
    this->_execGrade = rhs._execGrade;
    return ( *this );
}

std::ostream&    operator<<( std::ostream& o, const Form& cp ) {
    o << cp.getName() << " Form: " << std::endl;
    o << "Form signed: ";
    if ( cp.getSigned() )
        o << "yes" << std::endl;
    else
        o << "no" << std::endl;
    o << "Form sign grade: " << cp.getSignGrade() << std::endl;
    o << "Form execute grade: " << cp.getExecGrade() << std::endl;
    return ( o );
}
