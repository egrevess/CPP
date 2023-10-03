#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	public :
		Intern();
		Intern(const Intern &copy);
		~Intern();
		Intern	&operator=(const Intern &copy);

		Form	*makeForm(const std::string &name, const std::string &target);
		class NameNotFound : public std::exception 
		{
    		public:
        		const char* what() const throw() //utilisation de throw car je gère moi même les exceptions
				{
            		return "Name of form not found!"; // définition de what car je gère moi même le message d'erreur 
       			}
   		};

};

#endif