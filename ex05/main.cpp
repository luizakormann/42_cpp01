#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "--- Testando os 4 níveis ---" << std::endl << std::endl;

	harl.complain("DEBUG");
	std::cout << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "--- Testando nível inválido ---" << std::endl << std::endl;
	harl.complain("CRAZY");

	return (0);
}