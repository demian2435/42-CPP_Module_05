#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return this->target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		this->isSigned = other.isSigned;
        this->target = other.target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	if (this->getSigned())
	{
		if (executor.getGrade() > this->gradeForExecute)
			throw Form::GradeTooHighException();
		else
			std::cout << "<" << this->target << "> has been robotomized successfully 50% of the time" << std::endl;
	}
    else
        std::cout << "Can't execute. Form not signed" << std::endl;
}