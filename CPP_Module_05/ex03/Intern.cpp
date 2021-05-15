/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:56 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:34:22 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern &Intern::operator = (const Intern &other)
{
    (void)other;
    return (*this);
}

Form *Intern::makeForm(std::string type, std::string target) const
{
    Form *lista_form[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    std::string lista_nomi[3] = {"shrubbery creation", "robotomy request","presidential pardon" };
    Form *result = 0;
    for (int i = 0; i < 3; i++)
    {
        if (!type.compare(lista_nomi[i]))
            result = lista_form[i];
        else
            delete lista_form[i];
    }
    if (!result)
        std::cout << "Form not found" << std::endl;
    else
        std::cout << "Intern creates " << type << std::endl;
    return result;
}
