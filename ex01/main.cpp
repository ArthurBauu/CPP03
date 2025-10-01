#include "ScavTrap.hpp"

int main() {
	std::cout << "=== Construction par défaut ===" << std::endl;
	ScavTrap s1;
	std::cout << std::endl;

	std::cout << "=== Construction avec nom ===" << std::endl;
	ScavTrap s2("Serena");
	std::cout << std::endl;

	std::cout << "=== Test attaque ===" << std::endl;
	s2.attack("Handsome Jack");
	std::cout << std::endl;

	std::cout << "=== Test mode Gate Keeper ===" << std::endl;
	s2.guardGate();
	std::cout << std::endl;

	std::cout << "=== Test copie ===" << std::endl;
	ScavTrap s3(s2);
	std::cout << std::endl;

	std::cout << "=== Test assignation ===" << std::endl;
	s1 = s3;
	std::cout << std::endl;

	std::cout << "=== Fin du programme ===" << std::endl;
	return 0;
}
