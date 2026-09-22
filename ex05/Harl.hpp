#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	private:
		typedef void (Harl::*t_fptr)(void);

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl();
		Harl(const Harl &src);
		Harl	&operator=(const Harl &src);
		~Harl();

		void	complain(std::string level);
};

#endif