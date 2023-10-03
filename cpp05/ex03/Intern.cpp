# include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &copy)
{
	(void) copy;
}

Intern::~Intern()
{

}

Intern	&Intern::operator=(const Intern &copy)
{
	(void) copy;
	return(*this);
}

Form	*Intern::makeForm(const std::string &name, const std::string &target)
{
	std::string	names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	i = 0;

	while (i < 3 && names[i] != name)
		i++;

	switch (i)
	{
		case 0:
		{
			std::cout << "Intern creates " << name << std::endl;
			return new ShrubberyCreationForm(target);
		}
		case 1:
		{
			std::cout << "Intern creates " << name << std::endl;
			return new RobotomyRequestForm(target);
		}
		case 2:
		{
			std::cout << "Intern creates " << name << std::endl;
			return new PresidentialPardonForm(target);
		}
		default:
			throw Intern::NameNotFound();
	}
}