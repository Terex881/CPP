#include "point.hpp"


float area(Point a, Point b, Point c)
{
	float abs;
	abs = ((a.getX() * (b.getY() - c.getY()) + b.getX() * \
		(c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2);

	if (abs < 0)
		abs *= -1;

	return (abs);

}



bool bsp(Point  const a, Point const b, Point const c,  Point const p)
{

	float A = area(a, b, c);
	float A1 = area(p, b, c);
	float A2 = area(a, p, c);
	float A3 = area(a, b, p);

	if (A1 == 0 || A2 == 0 || A3 == 0)
		return  false;
	return (A == A1 + A2 + A3);
}
