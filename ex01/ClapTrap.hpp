#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string name, int hit, int energy, int attack);
	ClapTrap(ClapTrap const & src);
	virtual ~ClapTrap();
	ClapTrap &operator=(ClapTrap const & src);
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setAttackDammage(int amount);
protected:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
};

#endif
