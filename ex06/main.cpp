#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Uso: " << argv[0] << " <nível>" << std::endl;
		std::cerr << "Níveis disponíveis: DEBUG, INFO, WARNING, ERROR"
			<< std::endl;
		return (1);
	}

	Harl	harl;

	harl.complain(argv[1]);

	return (0);
}