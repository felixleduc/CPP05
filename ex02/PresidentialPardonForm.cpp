/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:43:32 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/08 16:26:45 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form( "Default", 25, 5 ) {
    std::cout << "PresidentialPardonForm: " << this->getName() << " default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form( "president pardon", 25, 5 ), _target( target ) {
    std::cout << "PresidentialPardonForm: " << this->getName() << " constructor called" << std::endl;
}

// PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& cp ) {
//     *this = cp;
// }

void    PresidentialPardonForm::execute( const Bureaucrat& executor ) const {
    if ( findException( executor, *this ) )
        std::cout << this->_target << " was forgiven by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm: " << this->getName() << " destructor called" << std::endl;
}

// PresidentialPardonForm&  PresidentialPardonForm::operator=( const PresidentialPardonForm& rhs ) {
// }
