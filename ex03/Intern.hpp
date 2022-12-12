/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:40:14 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/12 12:53:05 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
  private:
    
  public:
    Intern( void );
    Intern( const Intern& cp );
    ~Intern();

    Intern& operator=( const Intern& rhs );

    Form    *makeForm( std::string form_name, std::string form_target );
};

#endif
