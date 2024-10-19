#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main()
{
	DiamondTrap a("salah1"), b("salah2");
	a.attack("salah2");
	b.takeDamage(30);
	a.attack("salah2");
	b.takeDamage(30);
	a.attack("salah2");
	b.takeDamage(30);
	a.attack("salah2");
	b.takeDamage(30);
	b.beRepaired(100);
	b.whoAmI();
	return (0);
}




// int main()
// {
// 	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
// 	{
// 		std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 		ClapTrap a;
// 		ClapTrap b("Cody");

// 		std::cout << "\033[34mTesting\033[0m" << std::endl;
// 		a.attack("some other robot");
// 		a.takeDamage(10);
// 		a.takeDamage(10);
// 		a.beRepaired(5);
// 		a.attack("some other other robot");
// 		b.beRepaired(3);
// 		for (int i = 0; i < 12; i++)
// 			b.attack("Cody-clone");
// 		b.beRepaired(3);
// 		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	}
// 	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
// 	{
// 		std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 		ScavTrap a;
// 		ScavTrap b("Savage");

// 		std::cout << "\033[34mTesting\033[0m" << std::endl;
// 		a.attack("CloneTrap");
// 		// for (int i = 0; i < 50; i++)
// 		// 	a.attack("CloneTrap");
// 		a.beRepaired(22);
// 		a.takeDamage(21);
// 		a.beRepaired(22);
// 		a.guardGate();
// 		a.guardGate();
// 		b.attack("Savage-clone");
// 		b.takeDamage(101);
// 		b.takeDamage(15);
// 		b.attack("ScavTrap-clone");
// 		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	}
// 	std::cout << "\n\n### TESTING FRAGTRAP ###\n" << std::endl;
// 	{
// 		std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 		FragTrap a;
// 		FragTrap b("Chadd");

// 		std::cout << "\033[34mTesting\033[0m" << std::endl;
// 		a.highFivesGuys();
// 		a.attack("some random dude");
// 		a.takeDamage(101);
// 		a.takeDamage(1);
// 		a.attack("some random dude");
// 		b.highFivesGuys();
// 		// for(int i = 0; i < 101; i++)
// 		// 	b.attack("FragTrap-clone");
// 		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	}
// 	std::cout << "\n\n### TESTING DIAMONDTRAP ###\n" << std::endl;
// 	{
// 		std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 		DiamondTrap a;
// 		DiamondTrap b("Giga Chadd");
// 		DiamondTrap c(a);

// 		std::cout << "\033[34mTesting\033[0m" << std::endl;
// 		a.whoAmI();
// 		a.attack("some super random dude");
// 		b.whoAmI();
// 		b.attack("Chadd-clone");
// 		c.whoAmI();
// 		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	}
// 	return (0);
// }


void	alice_rundown(void)
{
	DiamondTrap alice("Alice");

	alice.attack("Bob");
	alice.attack("Chris");
	alice.attack("Diana");
	alice.attack("Elisa");
	alice.attack("Fred");
	alice.attack("Gemma");
	alice.attack("Henry");
	alice.attack("Isabella");
	alice.attack("Jack");
	alice.attack("Kevin");
	alice.attack("Laura");
	alice.attack("Mike");
	alice.guardGate();
	alice.highFivesGuys();
	alice.whoAmI();
}

void	bob_rundown(void)
{
	DiamondTrap	bob("Bob");

	// while (bob)
	// {
	// 	bob.takeDamage(20);
	// 	bob.beRepaired(10);
	// }
	bob.takeDamage(1);
	bob.guardGate();
	bob.highFivesGuys();
	bob.whoAmI();
}

// int	main(void)
// {
// 	std::cout << std::endl << std::endl << "Performing Alice's rundown..." << std::endl << std::endl;
// 	alice_rundown();
// 	std::cout << std::endl << std::endl << "Performing Bob's rundown..." << std::endl << std::endl;
// 	bob_rundown();
// }
