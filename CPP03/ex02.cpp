#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << "-- ClapTrap --" << std::endl;

	ClapTrap Bob("Bob");

	Bob.attack("Jack");
	Bob.takeDamage(20);
	Bob.beRepaired(1);

    std::cout << "-- ScavTrap --" << std::endl; 

    ScavTrap Alice("Alice");

    Alice.attack("Jack");
    Alice.takeDamage(142);
    Alice.beRepaired(42);
    Alice.guardGate();

    std::cout << "-- FragTrap --" << std::endl; 


    FragTrap Frank("Frank");

    Frank.attack("Bob");
    Frank.takeDamage(15);
    Frank.beRepaired(5);
    Frank.highFivesGuys();
	return (0);
}