#include "Zombie.hpp"

int	main(void)
{
	int	N;

	N = 10;
	Zombie *horde = zombieHorde(N, "neto");
	for (int i = 0; i < N; i++)
	{
		std::cout << "#" << i << " ANNOUNCE YOURSELF" << std::endl;
		horde[i].announce();
	}
	std::cout << "\nLETS KILL THEM ALLLLL" << std::endl;

	delete[] horde;
	return (0);
}
