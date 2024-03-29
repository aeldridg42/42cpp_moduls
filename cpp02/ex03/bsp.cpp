#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed check1(((a.getX() - point.getX()) * (b.getY() - a.getY()))
		- ((b.getX() - a.getX()) * (a.getY() - point.getY())));
	Fixed check2(((b.getX() - point.getX()) * (c.getY() - b.getY()))
		- ((c.getX() - b.getX()) * (b.getY() - point.getY())));
	Fixed check3(((c.getX() - point.getX()) * (a.getY() - c.getY()))
		- ((a.getX() - c.getX()) * (c.getY() - point.getY())));
	return ((check1 > 0 && check2 > 0 && check3 > 0)
		|| (check1 < 0 && check2 < 0 && check3 < 0));
}