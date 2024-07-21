#include "point.hpp"
#include "Fixed.hpp"

Point::~Point() {}

Point &Point::operator=(Point const &copy)
{
	return *this;
}

Point::Point(const Point &src): x(src.x), y(src.y)
{

}

float Point::getX() const
{
	return this->x.toFloat();
}

float Point::getY() const
{
	return this->y.toFloat();
}

