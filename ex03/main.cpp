#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    std::cout << "=== Test default creation ===" << std::endl;
    
    DiamondTrap d1;

    std::cout << "\n=== Test named creation ===" << std::endl;
    DiamondTrap d2("Rafa's Diamond ClapTrap");


    std::cout << "\n--- Actions ---" << std::endl;
    d2.attack("The timekeaper");
    d2.highFivesGuys();
    d2.takeDamage(30);
    d2.beRepaired(20);
    d2.takeDamage(100);
    d2.whoAmI();

    std::cout << "\n--- Copy and Assignment ---" << std::endl;
    DiamondTrap d3 = d2;


    std::cout << "\n=== End of Test ===" << std::endl;

    return 0;
}
