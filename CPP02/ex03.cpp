#include "Point.hpp"

int main(void)
{

	std::cout << "\033[1m\033[38;5;11m" << "\n -- BSP --\n" << "\033[0m" << std::endl;

	Point A(0, 0);
    std::cout << "Point A: x = " << A.getX() << ", y = " << A.getY() << std::endl;

    Point B(0, 3);
    std::cout << "Point B: x = " << B.getX() << ", y = " << B.getY() << std::endl;

	Point C(3, 0);
    std::cout << "Point C: x = " << C.getX() << ", y = " << C.getY() << std::endl;

	Point D(4, 0);
    std::cout << "Point D: x = " << D.getX() << ", y = " << D.getY() << std::endl;

	if (bsp(A, B, C, D))
	{
        std::cout << "Le point D est à l'intérieur du triangle ABC." << std::endl;
    } else {
        std::cout << "Le point D n'est pas à l'intérieur du triangle ABC." << std::endl;
    }

	Point W(2, 1);
    std::cout << "Point W: x = " << W.getX() << ", y = " << W.getY() << std::endl;

    Point X(2, 3);
    std::cout << "Point X: x = " << X.getX() << ", y = " << X.getY() << std::endl;

	Point Y(5, 2);
    std::cout << "Point Y: x = " << Y.getX() << ", y = " << Y.getY() << std::endl;

	Point Z(2.5, 2.5);
    std::cout << "Point Z: x = " << Z.getX() << ", y = " << Z.getY() << std::endl;

	if (bsp(W, X, Y, Z))
	{
        std::cout << "Le point Z est à l'intérieur du triangle WXY." << std::endl;
    } else {
        std::cout << "Le point Z n'est pas à l'intérieur du triangle WXY." << std::endl;
    }
	return (0);
}