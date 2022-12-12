/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:40:30 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/12 13:20:56 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
  private:
    std::string _target;
  public:
    RobotomyRequestForm( void );
    RobotomyRequestForm( std::string target );
    RobotomyRequestForm( const RobotomyRequestForm& cp );
    ~RobotomyRequestForm();
    
    void  execute( const Bureaucrat& executor ) const;

    RobotomyRequestForm&  operator=( const RobotomyRequestForm& rhs );
};


#endif
