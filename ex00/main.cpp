#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Terminator");
	a.attack("Handsome Jack");
	a.takeDamage(3);
	a.beRepaired(5);
	a.attack("Enemy");

	ClapTrap b = a;
	b.takeDamage(100);
	b.beRepaired(3);

	ClapTrap c;
	c.attack("Another Target");
	c.takeDamage(2);
	c.attack("Another Target");
	c.attack("Another Target");
	c.attack("Another Target");
	c.attack("Another Target");
	c.attack("Another Target");
	c.attack("Another Target");
	c.attack("Another Target");
	c.attack("Another Target");
	c.attack("Another Target");
	c.attack("Another Target");
	c.attack("Another Target");
	c.attack("Another Target");
	c.printStatus();
	


	return 0;
}
