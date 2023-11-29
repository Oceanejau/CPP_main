#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "-- ClapTrap --" << std::endl;

	ClapTrap Bob("Bob");

	Bob.attack("Jack");
	Bob.takeDamage(20);
	Bob.beRepaired(1);
	
	return (0);
}