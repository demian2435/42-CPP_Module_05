/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:32:52 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:32:54 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#define RED "\033[0;31m"
#define OFF "\033[0m"

int main (void)
{
	std::cout << RED << "**Form da 596" << OFF << std::endl;
	try
	{
		Form f = Form("F1", 596, 50);
		std::cout << f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << RED << "**Burocrate da 148 prova a firmare Form da 50" << OFF << std::endl;
	try
	{
		Bureaucrat b = Bureaucrat("Mario", 148);
		std::cout << b;
		Form f = Form("F1", 50, 50);
		std::cout << f;
		b.signForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << RED << "**Burocrate da 5 prova a firmare Form da 109" << OFF << std::endl;
	try
	{
		Bureaucrat b = Bureaucrat("Mario", 5);
		std::cout << b;
		Form f = Form("F1", 109, 50);
		std::cout << f;
		b.signForm(f);
		std::cout << f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
