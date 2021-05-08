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
