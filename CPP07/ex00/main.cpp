#include "Templates.hpp"
/*
Implement the following function templates:
• swap: Swaps the values of two given arguments. Does not return anything.
• min: Compares the two values passed in its arguments and returns the smallest
one. If the two of them are equal, then it returns the second one.
• max: Compares the two values passed in its arguments and returns the greatest one.
If the two of them are equal, then it returns the second one.
These functions can be called with any type of argument. The only requirement is
that the two arguments must have the same type and must support all the comparison
operators.
*/

template<typename T>
void	swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T	min(T& a, T& b)
{
	return (b < a) ? b : a;
}

template<typename T>
T	max(T& a, T& b)
{
	return (a < b) ? b : a;
}


int	main( void )
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}
