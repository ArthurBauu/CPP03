#include "FragTrap.hpp"

int main() {
    std::cout << "=== Test FragTrap ===" << std::endl;
    
    FragTrap f1;
    FragTrap f2("Freddy");

    f2.attack("an enemy");
    f2.highFivesGuys();

    FragTrap f3 = f2;
    FragTrap f4;
    f4 = f3;

    return 0;
}
