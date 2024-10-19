#ifndef FRAGTRAP_H
#define FRAGTRAP_H




#include "ClapTrap.hpp"


class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		~FragTrap();

		FragTrap &operator=(const FragTrap &src);
		FragTrap(const FragTrap &copy);

		FragTrap(std::string _name);


		void highFivesGuys(void);



};


#endif
// Constructors
// DiamondTrap::DiamondTrap(): ClapTrap("defaultDT_clap_trap")
// {
// 	this->_name = "defaultDT";
// 	this->_hit_pts = FragTrap::_hit_pts;
// 	this->_energy_pts = ScavTrap::_energy_pts;
// 	this->_attack_dmg = FragTrap::_attack_dmg;
// 	std::cout << "DiamondTrap Default Constructor called" << std::endl;
// }
