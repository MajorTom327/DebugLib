#include "debug.h"

void	dbg_var_str(const char *f, const char *name, const char *str, size_t lvl)
{
	size_t	i;

	if (!f || !name)
		return;
	i = 0;
	while (i < lvl)
	{
		write(1, "    ", 4);
		i++;
	}
	write(1, "\033[33m(", 6);
	write(1, f, ft_strlen(f));
	write(1, ")\033[32m\t", 7);
	write(1, name, ft_strlen(name));
	write(1, ":\t\033[35m[", 8);
	if (str)
		write(1, str, ft_strlen(str));
	else
		write(1, "\033[90mNULL\033[35m", 14);
	write(1, "]\033[0m\n", 6);
}
