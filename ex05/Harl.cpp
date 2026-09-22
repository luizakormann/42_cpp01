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

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_fptr		functions[4] = {&Harl::debug, &Harl::info,
			&Harl::warning, &Harl::error};
	int			i;

	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
		i++;
	}
	std::cout << "[ Reclamação de nível desconhecido: " << level
		<< " ]" << std::endl;
}