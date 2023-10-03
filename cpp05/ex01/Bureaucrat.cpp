# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	std::cout << "Bureaucrat constructor called" << std::endl;
}


Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name), _grade(copy._grade)
{
	std::cout << "Bureaucrat copy called" << std::endl;
}


Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}


Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy) // pas compris pourquoi on ne prend pas en compte name , a quoi sert ce truc en fait ?
{
	this->_grade = copy._grade;
	std::cout << "Bureaucrat operator called" << std::endl;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::addGrade()
{
	if (this->_grade > 1) 
		this->_grade = this->_grade - 1;
	else 
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::delGrade()
{
	if (this->_grade < 150) 
		this->_grade = this->_grade + 1;
	else
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName()
		<< " because " << e.what() << std::endl;
	}
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}