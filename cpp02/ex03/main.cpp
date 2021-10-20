#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main() {
	Point   A(Fixed(0), Fixed(5));
    Point   B(Fixed(5), 0);
    Point	C(Fixed(0), Fixed(0.0f));
    Point   point(-1.99f, 1.99f);
    
    if (bsp(A, B, C, point))
        std::cout << "Point is in triangle" << std::endl;
    else
        std::cout << "Point is not in triangle" << std::endl;
    return 0;
}
