#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main(void)
{
	const Animal* a = new Animal();
	const Animal* b( a );
	std::cout << "A : " << a->getType() << " " << std::endl;
	std::cout << "A sound : " << std::endl;
	a->makeSound();
	std::cout << "B : " << b->getType() << " " << std::endl;
	std::cout << "B sound : " << std::endl;
	b->makeSound();
	delete(a);
	const Animal* c = new Cat();
	const Animal* d( c );
	std::cout << "C : " << c->getType() << " " << std::endl;
	std::cout << "C sound : " << std::endl;
	c->makeSound();
	std::cout << "D : " << d->getType() << " " << std::endl;
	std::cout << "D sound : " << std::endl;
	d->makeSound();
	delete(c);
	const Animal* e = new Dog();
	const Animal* f( e );
	std::cout << "E : " << e->getType() << " " << std::endl;
	std::cout << "E sound : " << std::endl;
	e->makeSound();
	std::cout << "F : " << f->getType() << " " << std::endl;
	std::cout << "F sound : " << std::endl;
	f->makeSound();
	delete(e);
	std::cout << "-- fin test constructeur copie --" << std::endl;
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Dog : " << j->getType() << " " << std::endl;
	std::cout << "Cat : " << i->getType() << " " << std::endl;
	std::cout << "Cat : " << std::endl;
	i->makeSound(); 
	std::cout << "Dog : " << std::endl;
	j->makeSound();
	std::cout << "Unknown animal : " << std::endl;
	meta->makeSound();
	delete(i);
	delete(j);
	delete(meta);
	const WrongAnimal* beta = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();

	std::cout << "WrongCat : " << std::endl;
	x->makeSound();
	std::cout << "Wrong animal : " << std::endl;
	beta->makeSound();
	delete(x);
	delete(beta);


	//ex01

	//const Animal* tab = new Animal[4];

	/*Animal[0] = Dog();
	Animal[1] = Dog();
	Animal[2] = Cat();
	Animal[3] = Cat();*/

	Animal*	tab[4];
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