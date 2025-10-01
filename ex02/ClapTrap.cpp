#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " created (default)" << std::endl;
}

// Custom constructor
ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " created" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << "ClapTrap " << _name << " copied" << std::endl;
}

// Copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " cannot attack: no energy or hit points!" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " 
	          << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount > this->_hitPoints)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " takes too much damage : " << amount << " and is now destroyed!" << std::endl;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " cannot repair itself: no energy or hit points!" << std::endl;
		return;
	}
	if (this->_hitPoints + amount > 10)
	{
		amount = 10 - this->_hitPoints;
		std::cout << "ClapTrap " << _name << " tried repairing itself but is allready full life, so recovering " 
	          << amount << " hit points!" << std::endl;
	}
	else 
	{
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repairs itself, recovering " 
	          << amount << " hit points!" << std::endl;
	}
	this->_energyPoints--;
	
}

// For debugging purposes
void ClapTrap::printStatus() const {
	std::cout << "ClapTrap " << _name << " Status -- Hit Points: " << _hitPoints 
	          << ", Energy Points: " << _energyPoints 
	          << ", Attack Damage: " << _attackDamage << std::endl;
}