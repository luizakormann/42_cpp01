#include "Zombie.hpp"

int	main(void)
{
	//no param creates obj zombie without a name
	Zombie zombie;
	zombie.announce();

	//calls constructor with attribute;
	Zombie clovis("clovis");
	clovis.announce();

	//creates a zombie that is destroyed automatically
	randomChump("jordan");

	//creates a Zombie at heap, needs to be deleted
	Zombie *severina = newZombie("severina");
	severina->announce();
	delete (severina);

	return (0);
}
