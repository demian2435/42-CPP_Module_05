/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:58 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:34:22 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class Intern
{
	public:
    	/* Default Constructor */
		Intern();
		/* Destructor */
		~Intern();
		/* Copy Constructor */
		Intern(const Intern &other);
        /* Operation overload = */
		Intern &operator = (const Intern &other);
		/* Other */ 
        Form *makeForm(std::string type, std::string target) const;
};
