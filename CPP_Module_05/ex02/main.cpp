/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:12 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:33:33 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>
#define RED "\033[0;31m"
#define OFF "\033[0m"

int main (void)
{
	std::cout << RED << "**Form PresidentialPardonForm, B1-1, B2-67" << OFF << std::endl;
	try
	{
		PresidentialPardonForm f = PresidentialPardonForm("MARIO");
		std::cout << f;
		Bureaucrat b1 = Bureaucrat("Pippo", 1);
		b1.signForm(f);
		f.execute(b1);
		b1.executeForm(f);

		Bureaucrat b2 = Bureaucrat("Gino", 67);
		b2.executeForm(f);
		f.execute(b2);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << RED << "**Form RobotomyRequestForm, B1-5, B2-100" << OFF << std::endl;
	try
	{
		RobotomyRequestForm f = RobotomyRequestForm("MARIO");
		std::cout << f;
		Bureaucrat b1 = Bureaucrat("Pippo", 5);
		f.execute(b1);
		b1.executeForm(f);
		b1.signForm(f);
		f.execute(b1);
		b1.executeForm(f);

		Bureaucrat b2 = Bureaucrat("Gino", 100);
		b2.executeForm(f);
		f.execute(b2);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << RED << "**Form ShrubberyCreationForm, B1-50, B2-105" << OFF << std::endl;
	try
	{
		ShrubberyCreationForm f = ShrubberyCreationForm("MARIO");
		std::cout << f;
		Bureaucrat b1 = Bureaucrat("Pippo", 50);
		b1.signForm(f);
		f.execute(b1);

		ShrubberyCreationForm f2 = ShrubberyCreationForm("PEPPE");
		Bureaucrat b2 = Bureaucrat("Gino", 105);
		b2.executeForm(f2);
		b1.signForm(f2);
		b2.executeForm(f2);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
