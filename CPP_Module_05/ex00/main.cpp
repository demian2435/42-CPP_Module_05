#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main (void)
{
	std::cout << "**Burocrate da 148 a 151" << std::endl;
	try
	{
		Bureaucrat *b = new Bureaucrat("Mario", 148);
		std::cout << *b;
		b->decrementGrade();
		std::cout << *b;
		b->decrementGrade();
		std::cout << *b;
		b->decrementGrade();
		std::cout << *b;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "**Burocrate -1" << std::endl;
	try
	{
		Bureaucrat *b = new Bureaucrat("Mario", -1);
		std::cout << *b;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "**Burocrate da 2 a 0" << std::endl;
	try
	{
		Bureaucrat *b = new Bureaucrat("Mario", 2);
		std::cout << *b;
		b->incrementGrade();
		std::cout << *b;
		b->incrementGrade();
		std::cout << *b;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
