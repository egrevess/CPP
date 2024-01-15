# include "Form.hpp"

Form::Form(const std::string &name, int grade_signed, int grade_exec): _name(name), _grade_signed(grade_signed), _grade_exec(grade_exec)
{
	if (grade_signed < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (grade_signed > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
	this->_signed = false;
	std::cout << "Form constructor called" << std::endl;
}


Form::Form(const Form &copy): _name(copy._name), _signed(copy._signed) , _grade_signed(copy._grade_signed), _grade_exec(copy._grade_exec)
{
	std::cout << "Form copy called" << std::endl;
}


Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}


Form	&Form::operator=(const Form &copy)
{
	this->_signed = copy._signed;
	std::cout << "Form operator called" << std::endl;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->_name);
}

int	Form::getGradeSigned() const
{
	return (this->_grade_signed);
}

int	Form::getGradeExec() const
{
	return (this->_grade_exec);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_grade_signed)
		throw Form::GradeTooLowException ();
	else 
		this->_signed = true;

}

std::ostream& operator<<(std::ostream& os, const Form& Form)
{
    os << Form.getName() << ", Form grade signed " << Form.getGradeSigned() <<
	", Form grade executed " << Form.getGradeExec() << " and Form signed " << Form.getSigned() <<
	std::endl ;
    return os;
}