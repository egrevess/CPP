# include "ShrubberyCreationForm.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", target, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form("ShrubberyCreationForm", copy.getTarget(), 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	(void) copy;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	file(this->getTarget().append("_shrubbery"));
	if (file.is_open())
	{
		file << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣄⡀⠀⠀⢀⢀⣀⣤\n"
		<< "⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣾⣿⣿⣿⣿\n"
		<< "⣤⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
		<< "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⠟⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
		<< "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣡⣴⣦⢄⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
		<< "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢿⠛⠾⠧⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
		<< "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⠀⢸⠀⠀⠀⢸⣿⣿⣿⠿⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
		<< "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⣠⠤⢬⡀⠀⠀⢸⣿⠟⠁⠀⢻⣿⣿⡿⠁⢀⢤⡈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
		<< "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢻⣿⣿⣿⣿⣿⠃⢰⠁⠀⠘⡍⠢⠀⠟⠁⠀⠀⢀⡾⠿⣿⠁⠀⠎⠀⠑⠄⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
		<< "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⣿⣿⣿⣿⡇⠀⢸⠀⠀⠀⢳⣶⣄⠀⠀⠀⠀⠋⠀⠀⠈⠀⢸⠃⠋⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
		<< "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠈⣭⣿⣿⣿⣧⠀⠸⠀⠀⠀⠈⢿⠿⠂⣀⡤⠖⠊⠁⠀⠀⠀⠀⠓⠾⠙⡄⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
		<< "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⡇⠈⠻⢿⣿⣆⡀⠳⠀⠀⣠⡴⠒⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢶⡀⡸⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
		<< "⠛⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣅⡀⠀⣦⡀⠀⠁⠀⢀⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡭⠋⠁⣠⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀\n"
		<< "⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡋⡀⠘⢿⡄⠀⠀⠀⠀⡰⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠉⠀⢀⠴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣶⡶\n"
		<< "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡈⣤⣊⡠⠤⡄⢀⠔⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡑⠋⠁⠀⠀⠈⠻⣿⣿⣿⠿⠛⠉⠀⠀\n"
		<< "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠉⠓⠢⣼⠴⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⠀⠀⠀⠀⠀⠀⠈⠻⡀⠀⠀⠀⠀⠀\n"
		<< "⣿⣿⣿⣿⣿⣿⠿⠿⠛⠛⢋⣽⣿⣿⣿⡇⠀⠀⠁⠀⠀⣠⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡞⢸⠀⠀⠀⠀⠀⠀⠀⠀⠙⢶⠢⠤⢤⣀\n"
		<< "⡿⠟⠛⠉⠀⠀⠀⠀⢀⣴⠿⠟⠛⠛⠛⠻⡄⠀⠀⠀⠰⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢶⠟⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠣⠀⠀⠈\n"
		<< "⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠵⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠜⡽⠋⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		<< "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠑⠢⢤⣀⠀⠀⠀⠀⠀⢀⣴⡡⠊⠀⠀⠀⢠⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈\n"
		<< "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⣄⠉⠒⠢⠤⢤⡟⠋⠀⠀⠀⠀⢀⡎⠀⡄⠀⠀⠀⠀⢀⡠⠤⠒⠀⠀⡄⠀⠀\n"
		<< "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠈⠁⠀⠀⠐⠀⢧⠀⠳⣄⠀⠀⡜⠀⡘⠀⠀⣀⠔⠊⠁⠀⠀⠀⢠⠎⠀⠀⠀\n"
		<< "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢽⣇⠀⠈⠁⡼⠀⡰⣠⠔⠁⠀⠀⠀⠀⠀⢀⡔⠁⠀⠀⠀⠀\n"
		<< "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⢸⠀⠀⠰⢀⡸⠋⠀⠀⠀⠀⠀⠀⢀⣤⠎⠀⠀⠀⠀⠀⠀\n"
		<< "⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠔⢉⣿⠘⠀⠀⡷⠋⠀⠀⠀⠀⠀⢀⣠⣶⡟⠁⠀⠀⠀⠀⠀⠀⠀\n";
		file.close();
	}
	else
		return ;
	
	if (executor.getGrade() > this->getGradeExec())
		throw ShrubberyCreationForm::GradeTooLowException();
	else if (this->getSigned() == false)
		throw ShrubberyCreationForm::FormNotSigned();
}
