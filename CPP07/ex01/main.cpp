#include "Iter.hpp"
#include <cstring>

template<typename T, typename S, typename R>
void iter(T* a, S b, void (*fonc)(R))
{
    for (S x = 0; x < b; x++)
    {
        fonc(a[x]);
    }
    return;
}

template<typename T>
void    print_all(const T& a)
{
    std::cout << a << std::endl;
}

int main(void)
{
    std::cout << "str = -12345-" << std::endl;
    const char* str = "12345";
    iter(str, strlen(str), &print_all<char>);
    std::cout << "tab[] = -678910-" << std::endl;
    int tab[] = {6, 7, 8, 9, 10};
    iter(tab, sizeof(tab) / sizeof(tab[0]), &print_all<int>);
    int	ex[] = {0, 1, 2};
	std::string ex2[] = {"Hello", "World"};
    iter<std::string>(ex2, 2, &print_all<std::string>);
	iter<int>(ex, 3, &print_all<int>);
    return (0);
}