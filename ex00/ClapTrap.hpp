#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap const & src);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setAttackDammage(int amount);
private:
	ClapTrap();
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
};

#endif
