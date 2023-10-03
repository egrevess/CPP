# include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", target, 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form("PresidentialPardonForm", copy.getTarget(), 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	(void) copy;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
	
	if (executor.getGrade() > this->getGradeExec())
		throw PresidentialPardonForm::GradeTooLowException();
	else if (this->getSigned() == false)
		throw PresidentialPardonForm::FormNotSigned();
}