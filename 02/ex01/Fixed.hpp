#ifndef FIXED_HPP
#define FIXED_HPP



#include <iostream>

#include <ostream>
#include <string>
#include <cmath>



class Fixed
{
	private:
		int fixed_point;
		static const int frac_bits;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &src);

		Fixed(const int ipnut);
		Fixed(const float input);

		float toFloat(void) const;
		int toInt(void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);



};

std::ostream &operator<<(std::ostream &os ,const Fixed &src);







#endif
// class Fixed
// {
// 	private:
// 		int fixed_point ;
// 		static const int frac_bits;
// 	public:
// 		Fixed();
// 		Fixed(const Fixed& copy);
// 		Fixed& operator = (const Fixed& src);
// 		~Fixed();

// 		Fixed(const int in);
// 		Fixed(const float fl);


// 		int getRawBits(void) const;
// 		void setRawBits(int const raw);
// 		float toFloat( void ) const;
// 		int toInt( void ) const;

// };
// std::ostream	&operator<<(std::ostream &os, Fixed const &fixed);
