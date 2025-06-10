#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : Claptrap("Unnamed", 100, 50, 20)
{
	std::cout << "ScavTrap " << _name << " created (default)" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : Claptrap("Unnamed", 100, 50, 20)
{
	std::cout << "ScavTrap " << _name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
	std::cout << "ScavTrap " << _name << " copied" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " cannot attack: no energy or hit points!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ",causing " << _attackDamage << " points of damage!" << std::endl;
}
