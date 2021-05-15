/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:17 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:33:33 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    	/* Default Constructor */
		PresidentialPardonForm() : Form("presidential pardon", 25, 5), target("empty") {}
	public:
		/* Constructor */
		PresidentialPardonForm(std::string target);
		/* Destructor */
		virtual ~PresidentialPardonForm();
		/* Copy Constructor */
		PresidentialPardonForm(const PresidentialPardonForm &other);
        /* Operation overload = */
		PresidentialPardonForm &operator = (const PresidentialPardonForm &other);
		/* Other */ 
	    void execute(const Bureaucrat& executor) const;
		std::string getTarget(void) const;
};
