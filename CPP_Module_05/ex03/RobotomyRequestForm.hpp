#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    	/* Default Constructor */
		RobotomyRequestForm() : Form("robotomy request", 72, 45), target("empty") {}
	public:
		/* Constructor */
		RobotomyRequestForm(std::string target);
		/* Destructor */
		virtual ~RobotomyRequestForm();
		/* Copy Constructor */
		RobotomyRequestForm(const RobotomyRequestForm &other);
        /* Operation overload = */
		RobotomyRequestForm &operator = (const RobotomyRequestForm &other);
		/* Other */ 
	    void execute(const Bureaucrat& executor) const;
		std::string getTarget(void) const;
};
