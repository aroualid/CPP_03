#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	this->name = name;
	std::cout << name << " ScavTrap constructor called \n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called \n"; 
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & src)
{
	name = src.name; 
	hit_points = src.hit_points;
	energy_points = src.energy_points;
	attack_damage = src.attack_damage;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode \n";
}

void ScavTrap::attack(const std::string& target)
{
	if (energy_points > 0)
	{
		energy_points -= 1;
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage! \n";
		return ;
	}
	std::cout << "Not enough energy_points, energy points is : " << energy_points << "\n";
}

