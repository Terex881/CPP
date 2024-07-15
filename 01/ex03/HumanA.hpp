#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP



#include "Weapon.hpp"


class HumanA
{
private:
	std::string name;
	Weapon &weaponA;

public:
	HumanA(std::string set_name, Weapon &set_weapon) : name(set_name), weaponA(set_weapon) {}
	void attack();
};


#endif
