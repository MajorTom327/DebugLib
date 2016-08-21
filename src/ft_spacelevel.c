#include "debug.h"

void	ft_spacelevel(size_t lvl)
{
	size_t i;

	i = 0;
	write(2, " ", 1);
	while (i < lvl)
	{
		write(2, "    ", 4);
		i++;
	}
}
