#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name_;
		Weapon	*weapon_;

	public:
		HumanB(const std::string name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
