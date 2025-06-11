#include "ScavTrap.hpp"

int main() {
    std::cout << "=== Construction par défaut ===" << std::endl;
    ScavTrap defaultScav;
    std::cout << std::endl;

    std::cout << "=== Construction avec nom ===" << std::endl;
    ScavTrap namedScav("Serena");
    std::cout << std::endl;

    std::cout << "=== Test attaque ===" << std::endl;
    namedScav.attack("un pauvre robot");
    std::cout << std::endl;

    std::cout << "=== Test mode Gate Keeper ===" << std::endl;
    namedScav.guardGate();
    std::cout << std::endl;

    std::cout << "=== Test copie ===" << std::endl;
    ScavTrap copyScav(namedScav);
    std::cout << std::endl;

    std::cout << "=== Test assignation ===" << std::endl;
    ScavTrap assignScav;
    assignScav = namedScav;
    std::cout << std::endl;

    std::cout << "=== Fin du programme ===" << std::endl;
    return 0;
}
