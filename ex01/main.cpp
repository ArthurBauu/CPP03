#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Terminator");
	a.attack("Target Dummy");
	a.takeDamage(3);
	a.beRepaired(5);
	a.attack("Enemy");

	ClapTrap b = a;
	b.takeDamage(10);
	b.beRepaired(3);

	ClapTrap c;
	c.attack("Another Target");
	c.takeDamage(2);
	c.beRepaired(1);


	return 0;
}
