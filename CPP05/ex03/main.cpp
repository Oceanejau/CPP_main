#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat No_nothing;
	Bureaucrat No_name(50);
	Bureaucrat No_grade("Tom");
	Bureaucrat Trash("Trash", 160);
	Bureaucrat Bob("Bob", 150);
	Bureaucrat Billy("Billy", 1);
	Bureaucrat Biggy("Biggy", 1);
	std::cout <<  " _______________ FORM _______________ " << std::endl;
	PresidentialPardonForm	presiform("Macaron");
	std::cout << Bob << std::endl;
	std::cout << No_name << std::endl;
	std::cout << Billy << std::endl;
	std::cout << "\n___Presisential Pardon___" << std::endl;
	std::cout << presiform << std::endl;
	std::cout << "___collecting signatures___" << std::endl;
	presiform.beSigned(Bob);
	presiform.beSigned(No_name);
	presiform.beSigned(Billy);
	std::cout << "___execute___" << std::endl;
	presiform.execute(Bob);
	presiform.execute(No_name);
	presiform.execute(Billy);
	std::cout << "\n___Robot___" << std::endl;
	RobotomyRequestForm		robot("Bot");
	std::cout << robot << std::endl;
	No_name.setGrade(10);
	std::cout << "___collecting signatures___" << std::endl;
	robot.beSigned(Bob);
	robot.beSigned(No_name);
	robot.beSigned(Billy);
	std::cout << "___execute___" << std::endl;
	robot.execute(Bob);
	robot.execute(No_name);
	robot.execute(Billy);
	robot.execute(No_name);
	robot.execute(Billy);
	std::cout << "\n___Shrubbery___" << std::endl;
	ShrubberyCreationForm	file("new_file");
	std::cout << file << std::endl;
	Bob.setGrade(150);
	std::cout << "___collecting signatures___" << std::endl;
	file.beSigned(Bob);
	file.beSigned(No_name);
	file.beSigned(Billy);
	std::cout << "___execute___" << std::endl;
	file.execute(Bob);
	file.execute(No_name);
	file.execute(Billy);
	std::cout <<  " _______________ INTERN _______________ " << std::endl;
	Intern someRandomIntern;
	AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
	{
		RobotomyRequestForm* ribot = dynamic_cast<RobotomyRequestForm*>(rrf);
		if (ribot)
		{
			std::cout << *ribot << std::endl;
		}
		else
		{
			std::cout << "AForm cast to RobotomyRequestForm failed." << std::endl;
		}
	}
	else
	{
		std::cout << "Form creation failed." << std::endl;
	}
	delete rrf;
	AForm* rrb = someRandomIntern.makeForm("shrubbery creation", "Bender");
	if (rrb)
	{
		ShrubberyCreationForm* rabot = dynamic_cast<ShrubberyCreationForm*>(rrb);
		if (rabot)
		{
			std::cout << *rabot << std::endl;
		}
		else
		{
			std::cout << "AForm cast to ShrubberyCreationForm failed." << std::endl;
		}
	}
	else
	{
		std::cout << "Form creation failed." << std::endl;
	}
	delete rrb;
	AForm* rrbb = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (rrb)
	{
		PresidentialPardonForm* rabbot = dynamic_cast<PresidentialPardonForm*>(rrbb);
		if (rabbot)
		{
			std::cout << *rabbot << std::endl;
		}
		else
		{
			std::cout << "AForm cast to PresidentialPardonForm failed." << std::endl;
		}
	}
	else
	{
		std::cout << "Form creation failed." << std::endl;
	}
	delete rrbb;
	return (0);
}
