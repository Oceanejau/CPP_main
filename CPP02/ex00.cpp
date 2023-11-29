#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << " --- Suite test pour verifier la fonction set ---" << std::endl;

	Fixed x;
	x.setRawBits(42);
	Fixed y( x );
	Fixed z;
	z.setRawBits(84);

	std::cout << z.getRawBits() << std::endl;

	z = y;

	std::cout << x.getRawBits() << std::endl;
	std::cout << y.getRawBits() << std::endl;
	std::cout << z.getRawBits() << std::endl;

	return 0;
}
