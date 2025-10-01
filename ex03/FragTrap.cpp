#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Unnamed") {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " created with the help of Lilith (default)" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " created with the help of Lilith" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	*this = other;
	std::cout << "FragTrap " << _name << " copied" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this != &other) {
		std::cout << "FragTrap assignment operator called" << std::endl;
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}


FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " has been eaten by FL4K's creature" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " is requesting a high five!" << std::endl;
	std::cout << "✋" << std::endl;
	std::cout << "..." << std::endl;
	std::cout << "..." << std::endl;
	std::cout << "..." << std::endl;
	std::cout << "No one answerd to " << _name << " making him very sad\n" << std::endl;

}

void FragTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " cannot attack: no energy or hit points!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target << ",causing " << _attackDamage << " points of damage!" << std::endl;
}