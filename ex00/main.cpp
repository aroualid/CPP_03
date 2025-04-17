#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap bob("Bob");
    bob.setAttackDammage(12);
    bob.attack("Steve");
    bob.takeDamage(3);
    bob.beRepaired(13);
    for (int i = 0; i < 9; i++)
        bob.attack("Steve");
    bob.takeDamage(20);
}
