#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap {

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	virtual ~ScavTrap();
	ScavTrap &operator=(ScavTrap const & src);
	void guardGate();
	void attack(const std::string& target);
};

#endif
