#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unnamed_clap_name"), _name("Unnamed") {
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created using parts from ClapTrap, ScavTrap and FragTrap (default)" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), _name(name) {
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created using parts from ClapTrap, ScavTrap and FragTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) {
	*this = other;
	std::cout << "DiamondTrap " << _name << " copied" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other) {
		std::cout << "DiamondTrap assignment operator called" << std::endl;
		ClapTrap::operator=(other);
		_name = other._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " is being dismantled into parts from ClapTrap, ScavTrap and FragTrap" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "DiamondTrap " << _name << " cannot attack: no energy or hit points!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ",causing " << _attackDamage << " points of damage!" << std::endl;
}