#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <string>
#include <iostream>




class Weapon
{

private:
	std::string type;
public:
	const std::string& getType () const
	{ return type; };

	void setType(std::string new_type)
	{ type = new_type; }

	Weapon(std::string type) : type(type){}
};


class HumanA
{
private:
	std::string name;
	Weapon &weaponA;
public:
	HumanA(std::string set_name, Weapon &set_weapon) : name(set_name), weaponA(set_weapon) {}
	void attack()
	{
		std::cout << name << " attacks with their " << weaponA.getType() << std::endl;
	}
};



class HumanB
{
private:
	std::string name;
	Weapon *weaponB;


public:
	HumanB(std::string set_name) : name(set_name), weaponB(nullptr) {}
	void attack()
	{
		if(weaponB != nullptr)
			std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
	}
	  void setWeapon(Weapon& new_weapon) {
        weaponB = &new_weapon;
    }
};














#endif
