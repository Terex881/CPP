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
	{
		return type;
	}

	void setType(std::string new_type)
	{
		type = new_type;
	}

	Weapon(std::string type) : type(type)
	{}
};

#endif
