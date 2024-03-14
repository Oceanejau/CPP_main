#include <iostream>
#include <vector>
#include "Span.hpp"

int main()
{
    Span<int>   sp(10);
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    std::cout << "ADD NUMBERS" << std::endl;
    sp.addNumbers(numbers.begin(), numbers.end());
    sp.print();
    std::cout << "FIN ADD NUMBERS" << std::endl;
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "6 3 17 9 11" << std::endl;
    std::cout << "Plus petit ecart: " << sp.shortestSpan() << std::endl;
    std::cout << "Plus grand ecart: " << sp.longestSpan() << std::endl;
    
    sp.addNumber(600);
    sp.addNumber(-3);
    sp.addNumber(1);
    sp.addNumber(9);
    sp.addNumber(9);
    std::cout << "600 -3 1 9 9" << std::endl;
    std::cout << "Plus petit ecart: " << sp.shortestSpan() << std::endl;
    std::cout << "Plus grand ecart: " << sp.longestSpan() << std::endl;
    Span<int>   wagon(10);
    int         a;
    int         b;
    int         c;
    int         d;

    a = -50;
    b = -10;
    c = -5;
    d = -1;
    wagon.randomfill(-10000, 10000);
    wagon.print();
    
    std::cout << "Shortest : " << wagon.shortestSpan() << std::endl;
    std::cout << "Longest : " << wagon.longestSpan() << std::endl;

    wagon.addNumber(a);
    wagon.addNumber(b);
    wagon.addNumber(c);
    wagon.addNumber(d);
    wagon.print();
    std::cout << "Shortest : " << wagon.shortestSpan() << std::endl;
    std::cout << "Longest : " << wagon.longestSpan() << std::endl;
    a = 42;
    b = 42;
    c = 0;
    d = 142;
    wagon.addNumber(a);
    wagon.addNumber(b);
    wagon.addNumber(c);
    wagon.addNumber(d);
    //wagon.print();
    std::cout << "Shortest : " << wagon.shortestSpan() << std::endl;
    std::cout << "Longest : " << wagon.longestSpan() << std::endl;
    return 0;
}
