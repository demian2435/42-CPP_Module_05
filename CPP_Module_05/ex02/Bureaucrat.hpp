#pragma once
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
		/* Default Constructor */
		Bureaucrat() {}
	public:
		/* Constructor */
		Bureaucrat(std::string name, int grade);
		/* Destructor */
		~Bureaucrat();
		/* Copy Constructor */
		Bureaucrat(const Bureaucrat &other);
        /* Operation overload = */
		Bureaucrat &operator = (const Bureaucrat &other);
		/* Other */ 
		std::string getName(void) const;
		int getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form &f) const;
		void executeForm(const Form &form);
		/* Exception */
		struct GradeTooHighException : public std::exception
		{
			const char * what () const throw ()
			{
				return "Exception: Bureaucrat grade too high";
			}
		};
		struct GradeTooLowException : public std::exception
		{
			const char * what () const throw ()
			{
				return "Exception: Bureaucrat grade too low";
			}
		};
};

std::ostream& operator << (std::ostream &output, const Bureaucrat &obj);
