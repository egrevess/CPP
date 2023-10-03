#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		std::string			_name;
		std::string			_target;
		bool 				_signed;
		const int			_grade_signed;
		const int			_grade_exec;

	public :
		Form(const std::string &name, const std::string &target, int grade_signed, int grade_exec);
		Form(const Form &copy);
		~Form();
		Form	&operator=(const Form &copy);

		std::string	getName() const;
		std::string	getTarget() const;
		int			getGradeExec() const;
		int			getGradeSigned() const;
		bool		getSigned() const;
		void		beSigned(Bureaucrat &bureaucrat);

		virtual void	execute(Bureaucrat const & executor) const = 0;

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

		class FormNotSigned: public std::exception 
		{
    		public:
        		const char* what() const throw()
				{
            		return "Form is not signed!";
       			}
    	};

};

std::ostream& operator<<(std::ostream& os, const Form& Form);

#endif