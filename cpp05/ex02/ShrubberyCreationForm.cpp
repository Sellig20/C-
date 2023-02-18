#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ASCIITreeCertificate", 145, 137), target("")
{
	std::cout << "------Default SHRUBBERY Constructor called------------" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ASCIITreeCertificate", 145, 137), target(target)
{
	std::cout << "------Target SHRUBBERY Constructor called--------------" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	std::cout << "------Default Copied SHRUBBERY Constructor called------" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "------Default SHRUBBERY Destructor called--------------" << std::endl;

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src)
{
	isSigned = src.isSigned;
	target = src.target;
    return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream outfile;
	std::string str;

	if (!isSigned)
		throw (Form::IsNotSignedException());
	if (executor.getGrade() > executeGrade)
		throw (Form::GradeTooLowException());
	str = target;
	str.append("_shrubbery");
	outfile.open(str.c_str());
	if (!outfile.is_open())
		throw CannotCreateFileException();
	outfile <<  "                       " << std::endl << "\
                |||| " << std::endl << "\
                |||| " << std::endl << "\
                |||| /| " << std::endl << "\
           /|  |||| ||| " << std::endl << "\
           |||  |||| ||| " << std::endl << "\
           |||  |||| ||| " << std::endl << "\
           |||  |||| d|| " << std::endl << "\
           |||  |||||||/ " << std::endl << "\
           ||b._||||~~ " << std::endl << "\
            ||||||| " << std::endl << "\
            `~~~|||| " << std::endl << "\
                ||||  " << std::endl << "\
                ||||  " << std::endl << "\
~~~~~~~~~~~~~~~~||||~~~~~~~~~~~~~~ " << std::endl << "\
  ||..__..--  . ||||   .  .. " << std::endl << "\
.....____________________       " << std::endl << "\
        .  ||              ||    ." << std::endl << "\
. ||             .   ||     . " << std::endl << "\
   __...--..__..__       .     || " << std::endl << "\
||  .   .    ||     ||    __..--..  "<< std::endl;
outfile.close();
}
