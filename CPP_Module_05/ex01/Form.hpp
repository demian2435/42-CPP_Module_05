/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:32:48 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:32:50 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Form() : name("empty"), gradeForSign(150), gradeForExecute(150), isSigned(false) {}
	public:
		/* Constructor */
		Form(std::string name, int gradeForSign, int gradeForExecute);
		/* Destructor */
		~Form();
		/* Copy Constructor */
		Form(const Form &other);
        /* Operation overload = */
		Form &operator = (const Form &other);
		/* Other */ 
		std::string getName(void) const;
		int getGradeForSign(void) const;
		int getGradeForExecute(void) const;
		bool getSigned(void) const;
		void beSigned(const Bureaucrat b);
		/* Exception */
		class GradeTooHighException : public std::exception
		{
			public:
			const char * what () const throw ()
			{
				return "Exception: Form grade too high";
			}
		};
		class GradeTooLowException : public std::exception
		{
			public:
			const char * what () const throw ()
			{
				return "Exception: Form grade too low";
			}
		};
};

std::ostream& operator << (std::ostream &output, const Form &obj);
