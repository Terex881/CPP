#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP



#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weaponB;

public:
	HumanB(std::string set_name) : name(set_name), weaponB(nullptr)
	{}
	void attack();
	void setWeapon(Weapon& new_weapon);
};

#endif
