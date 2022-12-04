/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:53:10 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/04 14:19:34 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
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
    //void        increment( int& _grade );
    //void        decrement( int& _grade );
};

std::ostream&    operator<<( std::ostream& o, const Bureaucrat& cp );

#endif
