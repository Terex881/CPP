#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <iostream>



class ClapTrap
{
	private:
		std::string name;
		int hitPoints;
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

		int getHitPoints(void);
		int getEnergyPoints(void);
		int getAttackDammage(void);
		std::string getName(void);

		void setName(std::string name);
		void setHitPoints(int hitpoints);
		void setEnergyPoints(int energyPoints);
		void setAttackDammage(int attackDammage);


};












#endif
