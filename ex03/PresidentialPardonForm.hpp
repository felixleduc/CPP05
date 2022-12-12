/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:28:02 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/12 13:20:50 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
  private:
    std::string _target;
  public:
    PresidentialPardonForm( void );
    PresidentialPardonForm( std::string target );
    PresidentialPardonForm( const PresidentialPardonForm& cp );
    ~PresidentialPardonForm();
    
    void  execute( const Bureaucrat& executor ) const;

    PresidentialPardonForm&  operator=( const PresidentialPardonForm& rhs );
};


#endif
