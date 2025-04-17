#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name) : hit_points(10), energy_points(10), attack_damage(10)
{
	this->name = name;
	std::cout << name << " ClapTrap constructor called \n";
}

ClapTrap::ClapTrap(std::string name, int hit, int energy, int attack) : hit_points(hit), energy_points(energy), attack_damage(attack)
{
	this->name = name;
	std::cout << name << " ClapTrap constructor called \n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called \n"; 
}


ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & src)
{
	name = src.name; 
	hit_points = src.hit_points;
	energy_points = src.energy_points;
	attack_damage = src.attack_damage;
	return (*this);
}

void ClapTrap::setAttackDammage(int amount)
{
	attack_damage = amount;
}

void ClapTrap::attack(const std::string& target)
{
	if (energy_points > 0)
	{
		energy_points -= 1;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage! \n";
		return ;
	}
	std::cout << "Not enough energy_points, energy points is : " << energy_points << "\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " receive attacks, making him lose " << amount << " hit points ! \n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points > 0)
	{
		energy_points -= 1;
		hit_points += amount;
		std::cout << "ClapTrap " << name << " repairs itself and regains " << amount << " hit points! \n";

		return ;
	}
	std::cout << "Not enough energy_points, energy points is : " << energy_points << "\n";
}
