#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	
	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << " --- Suite test pour clarifier ces histoires de précision ---" << std::endl;

	float x = 0.1001f;

    std::cout << "x float: " << x << std::endl;

	Fixed	const z(0.1001f);

	std::cout << "z is " << z << std::endl;
	std::cout << "z is " << z.toInt() << " as integer" << std::endl;

	std::cout << "Si on réessaie avec une précision de 16 au lieu de 8 bits," << std::endl; 
	std::cout << "z est plus proche de sa vraie valeur" << std::endl;

	return (0);
}