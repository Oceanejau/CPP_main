#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void)
{
	Bureaucrat No_nothing;
	Bureaucrat No_name(50);
	Bureaucrat No_grade("Tom");
	Bureaucrat Trash("Trash", 160);
	std::cout << Trash << std::endl;
	Trash.setGrade(120);
	Bureaucrat Big_Boss("Big_Boss", -1);
	Big_Boss.setGrade(1);
	Bureaucrat Bob("Bob", 150);
	Bureaucrat Billy("Billy", 1);
	Bureaucrat Biggy("Biggy", 1);
	std::cout <<  " _______________ MODIF LVL _______________ " << std::endl;
	std::cout << Bob.getName() << " is now promoted to lvl 120:" << std::endl;
	Bob.setGrade(120);
	std::cout << Bob << std::endl;
	std::cout << Billy.getName() << " is now downgraded to lvl 2:" << std::endl;
	Billy.setGrade(2);
	std::cout << Billy << " | " << Bob << std::endl;
	std::cout <<  " _______________ COPY _______________ " << std::endl;
	Bureaucrat	copy(Bob);
	std::cout << copy << std::endl;
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
	ShrubberyCreationForm	file("new_fie");
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
	return (0);
}
