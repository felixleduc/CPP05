/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:36:29 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/07 14:22:18 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form {
  private:
    std::string _name;
    std::string _signedBy;
    bool        _signed;
    int         _signGrade;
    int         _execGrade;
  public:
    Form( void );
    Form( std::string name, int signGrade, int execGrade );
    Form( const Form& cp );
    ~Form();

    Form&   operator=( const Form& rhs );

    std::string getName( void ) const;
    bool        getSigned( void ) const;
    int         getSignGrade( void ) const;
    int         getExecGrade( void ) const;
    void        exceptionSign( void );
    void        exceptionExec( void );
    void        beSigned( Bureaucrat& bureaucrat );
    
    class GradeTooHighException : public std::exception {
      public:
        virtual const char  *what() const throw() {
            return ( "Form::GradeTooHighException" );
        }
    };
    class GradeTooLowException : public std::exception {
      public:
        virtual const char  *what() const throw() {
            return ( "Form::GradeTooLowException" );
        }
    };
};

std::ostream&    operator<<( std::ostream& o, const Form& cp );

#endif
