#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

protected : 
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

public:
	ClapTrap();
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();
	ClapTrap(const std::string &name);

	void attack(const std::string &target);
	void takeDamage(unsigned int amout);
	void beRepaired(unsigned int amount);

	void printStatus() const;
};




#endif