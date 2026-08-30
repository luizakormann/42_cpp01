#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(const std::string &name)
{
	name_ = name;
}

Zombie::~Zombie()
{
	std::cout << name_ << " has been destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string &name)
{
	name_ = name;
}
