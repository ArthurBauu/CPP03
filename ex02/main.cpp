#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "=== Test FragTrap ===" << std::endl;
    
    FragTrap f1;
    FragTrap f2("Freddy");
    ScavTrap f5("Serena");


    std::cout << "\n--- Actions ---" << std::endl;
    f2.highFivesGuys();
    f2.attack("Enemy1");
    f5.guardGate();
    f5.attack("Enemy2");

    std::cout << "\n--- Copy and Assignment ---" << std::endl;
    FragTrap f3 = f2;
    FragTrap f4;
    f4 = f3;


    std::cout << "\n=== End of Test ===" << std::endl;

    return 0;
}
