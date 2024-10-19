#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <iostream> // IWYU pragma: keep

class ClapTrap
{
	private:
		std::string name; //_name
		unsigned int hitPoints;
		int energyPoints;
		int attackDammage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &src);
		ClapTrap(const ClapTrap &copy);

		ClapTrap(std::string set_name);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif
