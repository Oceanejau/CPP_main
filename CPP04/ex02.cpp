#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	/*const AAnimal* a = new AAnimal();
	const AAnimal* b( a );
	std::cout << "A : " << a->getType() << " " << std::endl;
	std::cout << "A sound : " << std::endl;
	a->makeSound();
	std::cout << "B : " << b->getType() << " " << std::endl;
	std::cout << "B sound : " << std::endl;
	b->makeSound();
	delete(a);
	std::cout << "-- test constructeur copie AAnimal --" << std::endl;
	AAnimal ba;
	{
		AAnimal tp = ba;
	}
	std::cout << "-- fin test constructeur copie AAnimal --" << std::endl;*/
	const AAnimal* c = new Cat();
	const AAnimal* d( c );
	std::cout << "C : " << c->getType() << " " << std::endl;
	std::cout << "C sound : " << std::endl;
	c->makeSound();
	std::cout << "D : " << d->getType() << " " << std::endl;
	std::cout << "D sound : " << std::endl;
	d->makeSound();
	delete(c);
	std::cout << "-- test constructeur copie Cat --" << std::endl;
	Cat sic;
	{
		Cat mp = sic;
	}
	std::cout << "-- fin test constructeur copie Cat --" << std::endl;
	const AAnimal* e = new Dog();
	const AAnimal* f( e );
	std::cout << "E : " << e->getType() << " " << std::endl;
	std::cout << "E sound : " << std::endl;
	e->makeSound();
	std::cout << "F : " << f->getType() << " " << std::endl;
	std::cout << "F sound : " << std::endl;
	f->makeSound();
	delete(e);
	std::cout << "-- test constructeur copie Dog --" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "-- fin test constructeur copie Dog --" << std::endl;

	//const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << "Dog : " << j->getType() << " " << std::endl;
	std::cout << "Cat : " << i->getType() << " " << std::endl;
	std::cout << "Cat : " << std::endl;
	i->makeSound(); 
	std::cout << "Dog : " << std::endl;
	j->makeSound();
	std::cout << "Unknown AAnimal : " << std::endl;
	//meta->makeSound();
	delete(i);
	delete(j);
	//delete(meta);
	const WrongAnimal* beta = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();

	std::cout << "WrongCat : " << std::endl;
	x->makeSound();
	std::cout << "Wrong AAnimal : " << std::endl;
	beta->makeSound();
	delete(x);
	delete(beta);

	std::cout << "-- test brain --" << std::endl;

	std::string idea1 = "Fetch the ball";
	std::string idea2 = "Eat a bone";
	std::string idea3 = "Chase the mailman";
	std::string idea4 = "Take a nap";

	std::string idea5 = "Climb a tree";
	std::string idea6 = "Chase a mouse";
	std::string idea7 = "Smell a catnip";
	std::string idea8 = "Take a nap";
	Cat	cat(4);
	cat.setIdea(idea5);
	cat.setIdea(idea6);
	cat.setIdea(idea7);
	cat.setIdea(idea8);
	cat.setIdea(idea1);
	cat.printBrain();
	Cat	cot = cat;
	cot.printBrain();

	Dog	dog(6);
	dog.setIdea(idea1);
	dog.setIdea(idea2);
	dog.setIdea(idea3);
	dog.setIdea(idea4);
	dog.setIdea(idea5);
	dog.printBrain();
	Dog	dag = dog;
	dag.printBrain();

	std::cout << "-- test allocation tableau AAnimal Cat&Dog --" << std::endl;

	AAnimal*	tab[4];
	tab[0] = new Dog();
	tab[1] = new Dog();
	tab[2] = new Cat();
	tab[3] = new Cat();
 	delete(tab[0]);
	delete(tab[1]);
	delete(tab[2]);
	delete(tab[3]);

	return (0);
}

