#include "Fixed.hpp"

const int Fixed::frac_bits = 8;

std::ostream &operator<<(std::ostream &os ,const Fixed &src)
{
	os << src.toFloat();
	return os;
}





Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point = src.getRawBits();
	return *this;
}
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int Fixed::getRawBits(void) const
{
	return fixed_point;
}

void Fixed::setRawBits(int raw)
{
	this->fixed_point = raw;
}


float Fixed::toFloat() const
{
	return ((float)this->fixed_point / (float)(1 << this->frac_bits));
}

int Fixed::toInt() const
{
	return this->fixed_point >> this->frac_bits;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = n << this->frac_bits;
}
Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf(f * (1 << this->frac_bits));

}



































// const int Fixed::frac_bits = 8;

// std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
// {
// 	o << fixed.toFloat();
// 	return (o);
// }

// // Constructors
// Fixed::Fixed(): fixed_point(0)
// {
// 	std::cout << "Fixed Default Constructor called" << std::endl;
// }

// Fixed::Fixed(const int input)
// {
// 	std::cout << "Fixed Int Constructor called" << std::endl;
// 	this->fixed_point = input << this->frac_bits;
// }

// Fixed::Fixed(const float input)
// {
// 	std::cout << "Fixed Float Constructor called" << std::endl;
// 	this->fixed_point = roundf(input * (1 << this->frac_bits));
// }

// Fixed::Fixed(const Fixed &copy)
// {
// 	std::cout << "Fixed Copy Constructor called" << std::endl;
// 	*this = copy;
// }

// // Deconstructors
// Fixed::~Fixed()
// {
// 	std::cout << "Fixed Deconstructor called" << std::endl;
// }

// // Overloaded Operators
// Fixed &Fixed::operator=(const Fixed &src)
// {
// 	std::cout << "Fixed Assignation operator called" << std::endl;
// 	if (this != &src)
// 		this->fixed_point = src.getRawBits();

// 	return *this;
// }

// // Public Methods
// float	Fixed::toFloat(void)const
// {
// 	return ((float)this->fixed_point / (float)(1 << this->frac_bits));
// }

// int	Fixed::toInt(void)const
// {
// 	return (this->fixed_point >> this->frac_bits);
// }
// // Getter
// int	Fixed::getRawBits(void)const
// {
// 	// std::cout << "getRawBits member function called" << std::endl;
// 	return (this->fixed_point);
// }

// // Setter
// void	Fixed::setRawBits(int const raw)
// {
// 	// std::cout << "setRawBits member function called" << std::endl;
// 	this->fixed_point = raw;
// }

