#ifndef FRAGTRAP_H
#define FRAGTRAP_H




#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap &operator=(const FragTrap &src);
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);

		void highFivesGuys(void);



};


#endif
