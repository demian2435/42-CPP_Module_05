#pragma once
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    	/* Default Constructor */
		ShrubberyCreationForm() : Form("shrubbery creation", 145, 137), target("empty") {}
	public:
		/* Constructor */
		ShrubberyCreationForm(std::string target);
		/* Destructor */
		virtual ~ShrubberyCreationForm();
		/* Copy Constructor */
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
        /* Operation overload = */
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &other);
		/* Other */ 
	    void execute(const Bureaucrat& executor) const;
		std::string getTarget(void) const;
};
