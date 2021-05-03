#pragma once
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		const int gradeForSign;
		const int gradeForExecute;
		bool isSigned;
		/* Default Constructor */
		Form() : name("Empty"), gradeForSign(1), gradeForExecute(1), isSigned(false) {}
	public:
		/* Constructor */
		Form(std::string name, int gradeForSign, int gradeForExecute);
		/* Destructor */
		~Form();
		/* Copy Constructor */
		Form(Form const &other);
        /* Operation overload = */
		Form &operator = (Form const &other);
		/* Other */ 
		std::string getName(void) const;
		int getGradeForSign(void) const;
		int getGradeForExecute(void) const;
		bool getSigned(void) const;
		void beSigned(Bureaucrat const b);
		/* Exception */
		struct GradeTooHighException : public std::exception
		{
			const char * what () const throw ()
			{
				return "Exception: Form grade too high";
			}
		};
		struct GradeTooLowException : public std::exception
		{
			const char * what () const throw ()
			{
				return "Exception: Form grade too low";
			}
		};
};

std::ostream& operator << (std::ostream &output, Form const &obj);
