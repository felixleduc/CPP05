/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:53:10 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/07 14:22:01 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
  private:
    std::string _name;
    int         _grade;
  public:
    Bureaucrat( void );
    Bureaucrat( std::string name, int grade );
    Bureaucrat( const Bureaucrat& cp );
    ~Bureaucrat();

    Bureaucrat& operator=( const Bureaucrat& rhs );

    std::string getName( void ) const;
    int         getGrade( void ) const;
    void        incrementGrade( void );
    void        decrementGrade( void );
    void        signForm( Form& form );

    class GradeTooHighException : public std::exception {
      public:
        virtual const char    *what() const throw() {
            return ( "Bureaucreat::GradeTooHighException" );
        }
    };
    class GradeTooLowException : public std::exception {
      public:
        virtual const char    *what() const throw() {
            return ( "Bureaucrat::GradeTooLowException" );
        }
    };
};

std::ostream&    operator<<( std::ostream& o, const Bureaucrat& cp );

#endif
