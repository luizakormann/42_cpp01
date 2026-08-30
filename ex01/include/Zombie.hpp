#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	name_;

	public:
		Zombie();
		Zombie(const std::string &name);
		~Zombie();
		void	announce(void);
		void	setName(const std::string &name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
