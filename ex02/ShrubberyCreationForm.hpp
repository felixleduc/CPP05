/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:40:30 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/12 13:20:32 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
  private:
    std::string  _target;
  public:
    ShrubberyCreationForm( void );
    ShrubberyCreationForm( std::string target );
    ShrubberyCreationForm( const ShrubberyCreationForm& cp );
    ~ShrubberyCreationForm();
    
    void  execute( const Bureaucrat& executor ) const;

    ShrubberyCreationForm&  operator=( const ShrubberyCreationForm& rhs );
};

#endif
