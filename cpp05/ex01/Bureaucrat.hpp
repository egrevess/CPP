#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private :
		const std::string	_name;
		int					_grade;

	public :
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat	&operator=(const Bureaucrat &copy);

		std::string	getName() const;
		int			getGrade() const;
		void		addGrade();
		void		delGrade();
		void		signForm(Form &form);

		class GradeTooHighException : public std::exception 
		{
    		public:
        		const char* what() const throw() //utilisation de throw car je gère moi même les exceptions
				{
            		return "Grade is too high!"; // définition de what car je gère moi même le message d'erreur 
       			}
   		};

   		class GradeTooLowException : public std::exception 
		{
    		public:
        		const char* what() const throw()
				{
            		return "Grade is too low!";
       			}
    	};

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif