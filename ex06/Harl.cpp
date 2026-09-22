#include "Harl.hpp"

Harl::Harl() {}

Harl::Harl(const Harl &src)
{
	(void)src;
}

Harl	&Harl::operator=(const Harl &src)
{
	(void)src;
	return (*this);
}

Harl::~Harl() {}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Eu amo ter bacon extra para o meu hambúrguer "
		"7XL-duplo-queijo-triplo-picles-ketchup-especial. "
		"Eu realmente amo!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Eu não acredito que adicionar bacon extra custa mais "
		"dinheiro. Vocês não colocaram bacon suficiente no meu "
		"hambúrguer! Se vocês tivessem colocado, eu não estaria "
		"pedindo por mais!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Eu acho que mereço ter bacon extra de graça. Eu venho "
		"aqui há anos, enquanto você começou a trabalhar aqui apenas "
		"no mês passado." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Isto é inaceitável! Eu quero falar com o gerente agora."
		<< std::endl;
}

static int	levelToIndex(const std::string &level)
{
	if (level == "DEBUG")
		return (0);
	if (level == "INFO")
		return (1);
	if (level == "WARNING")
		return (2);
	if (level == "ERROR")
		return (3);
	return (-1);
}

void	Harl::complain(std::string level)
{
	switch (levelToIndex(level))
	{
		case 0:
			debug();
			/* fallthrough */
		case 1:
			info();
			/* fallthrough */
		case 2:
			warning();
			/* fallthrough */
		case 3:
			error();
			break;
		default:
			std::cout << "[ Provavelmente reclamando sobre "
				"problemas insignificantes ]" << std::endl;
	}
}