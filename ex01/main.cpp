#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap steve("Steve");
    ScavTrap bob("Bob");
    steve.attack("Bob");
    bob.attack("Steve");
    bob.takeDamage(3);
    bob.beRepaired(13);
    bob.takeDamage(20);
    bob.guardGate();
}
