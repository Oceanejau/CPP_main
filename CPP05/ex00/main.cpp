#include "Bureaucrat.hpp"

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
	return (0);
}
