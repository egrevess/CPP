# include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", target, 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form("RobotomyRequestForm", copy.getTarget(), 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	(void) copy;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "Noise of drill" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->getTarget() <<" has been successfully robotised " << std::endl;
	else
		std::cout << this->getTarget() <<" has not been successfully robotised " << std::endl;
	
	if (executor.getGrade() > this->getGradeExec())
		throw RobotomyRequestForm::GradeTooLowException();
	else if (this->getSigned() == false)
		throw RobotomyRequestForm::FormNotSigned();
}