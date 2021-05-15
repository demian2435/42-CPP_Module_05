/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:14 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:33:33 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5)
{
    this->target = target;
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return this->target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		this->isSigned = other.isSigned;
        this->target = other.target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if (this->getSigned())
	{
		if (executor.getGrade() > this->gradeForExecute)
			throw Form::GradeTooHighException();
		else
			std::cout << "<" << this->target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
	}
    else
        std::cout << "Can't execute. Form not signed" << std::endl;
}
