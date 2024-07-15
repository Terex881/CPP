#include "HumanB.hpp"




void HumanB::attack()
{
	if (weaponB != nullptr)
		std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
}
void HumanB::setWeapon(Weapon& new_weapon)
{
	weaponB = &new_weapon;
}
