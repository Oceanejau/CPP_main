#include "ScalarConverter.hpp"
#include <string>

int main(int ac, char **av)
{
	/*if (ac == 2)
	{
		std::string	str(av[1]);
		ScalarConverter::convert(str);
		return (1);
	}
	std::cout << "Error: ./convert one_arg" << std::endl;
		return (-1);
*/

	(void)ac;
	(void)av;
	std::cout << "\n____ TESTS ____" << std::endl;
	ScalarConverter::convert("0");
	ScalarConverter::convert("-1");
	ScalarConverter::convert("123");
	ScalarConverter::convert("288");
	ScalarConverter::convert("-111111111111");
	ScalarConverter::convert("111111111111");

	ScalarConverter::convert("42.0");
	ScalarConverter::convert("42.5");
		ScalarConverter::convert("42.1234");

	ScalarConverter::convert("42.0f");
				ScalarConverter::convert("1.1234");
			ScalarConverter::convert("42.1");
			ScalarConverter::convert("42.12");
			ScalarConverter::convert("42.123");
			ScalarConverter::convert("42.1234");
			ScalarConverter::convert("42.12345");
						ScalarConverter::convert("42.123456");
			ScalarConverter::convert("42.1234567");
			ScalarConverter::convert("42.12345678");
						ScalarConverter::convert("42.123456789");


			ScalarConverter::convert("340282001837565597733306976381245063168.0f");

	ScalarConverter::convert("3000.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196");

	std::cout << "\n____ Errors ____" << std::endl;
	ScalarConverter::convert("");
	ScalarConverter::convert("--5");
	ScalarConverter::convert("-6-5");
	ScalarConverter::convert("-1m");
	ScalarConverter::convert("5.");
	ScalarConverter::convert("5f");
	ScalarConverter::convert("5.f");
	ScalarConverter::convert("5.1.f");
	ScalarConverter::convert("5..01f");
	ScalarConverter::convert("5.0f.01f");
	std::cout << "\n____ NAN NANF ____" << std::endl;
	ScalarConverter::convert("nan");
	ScalarConverter::convert("nanf");
	std::cout << "\n____ +INF +INFF ____" << std::endl;
	ScalarConverter::convert("+inf");
	ScalarConverter::convert("+inff");
	std::cout << "\n____ -INF -INFF ____" << std::endl;
	ScalarConverter::convert("-inf");
	ScalarConverter::convert("-inff");
	return (0);
}
