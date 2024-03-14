#include "Serializer.hpp"
#include "Data.hpp"

int	main(void)
{
	Data		*test = new Data;
	test->i = 42;
	Data		*cpy;
	uintptr_t	raw;

	raw = serialize(test);
	cpy = deserialize(raw);

	std::cout << "test->i: " << test->i << std::endl;
	std::cout << "cpy->i: " << cpy->i << std::endl << std::endl;

	std::cout << "test: " << test << std::endl;
	std::cout << "cpy: " << cpy << std::endl;

	delete test;
	return (0);
}
