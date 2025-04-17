
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	this->name = name;
	std::cout << name << " FragTrap constructor called \n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called \n"; 
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap& FragTrap::operator=(FragTrap const & src)
{
	name = src.name; 
	hit_points = src.hit_points;
	energy_points = src.energy_points;
	attack_damage = src.attack_damage;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	if (energy_points > 0)
	P	
}
