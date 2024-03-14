#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    try
    {
        std::vector<int>::iterator it1 = easyfind(vec, 3);
        std::cout << "Position dans le vecteur : " << std::distance(vec.begin(), it1) << std::endl;
    }
    catch (std::runtime_error& e)
    {
        std::cout << "Erreur : " << e.what() << std::endl;
    }

    try
    {
        std::list<int>::iterator it2 = easyfind(lst, 25);
        std::cout << "Position dans la liste : " << std::distance(lst.begin(), it2) << std::endl;
    }
    catch (std::runtime_error& e)
    {
        std::cout << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}
