#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}
		
Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade(void)
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

std::ostream& operator<<(std::ostream &output, Bureaucrat const &obj)
{
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (output);
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->name << " sign " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " cannot sign " << f.getName() << " because his grade is too low" << std::endl;
	}
}