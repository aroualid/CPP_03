#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap steve("Steve");
    ScavTrap bob("Bob");
    FragTrap xavier("Xavier");
	steve.attack("Bob");
    bob.attack("Steve");
    bob.takeDamage(3);
    bob.beRepaired(13);
    bob.takeDamage(20);
    bob.guardGate();
	xavier.attack("Bob");
    xavier.takeDamage(3);
    xavier.beRepaired(13);
    xavier.takeDamage(20);
    xavier.highFivesGuys();

}
