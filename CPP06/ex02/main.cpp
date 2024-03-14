#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

#include <cstdlib>
#include <ctime>

Base * generate(void)
{
    srand(time(NULL));
    int choice = rand() % 3;

    switch(choice)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return (NULL);
    }
    return (NULL);
}

void identify(Base* p)
{
   if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    identify(&p);
}
int main(void)
{
	Base* obj = generate();
    identify(obj);

    delete obj;
    
    return 0;
}
