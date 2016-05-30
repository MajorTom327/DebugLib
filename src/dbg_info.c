#include "debug.h"

void	dbg_info(const char *f, const char *data, size_t lvl)
{
	size_t	i;

	i = 0;
	if (f == NULL || data == NULL)
		return ;
	while (i < lvl)
	{
		write(1, "    ", 4);
		i++;
	}
	write(1, "\033[33m(", 6);
	write(1, f, ft_strlen(f));
	write(1, ")\033[32m\t", 7);
	write(1, data, ft_strlen(data));
	write(1, "\033[0m\n", 5);
}
