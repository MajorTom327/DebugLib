#include "debug.h"

void	dbg_var_str(const char *f, const char *name, const char *str, size_t lvl)
{
	if (!f || !name)
		return;
	write(2, "\033[33m(", 6);
	write(2, f, ft_strlen(f));
	write(2, ")\033[32m", 6);
	ft_spacelevel(lvl);
	write(2, name, ft_strlen(name));
	write(2, ":\t\033[35m[", 8);
	if (str)
		write(2, str, ft_strlen(str));
	else
		write(2, "\033[90mNULL\033[35m", 14);
	write(2, "]\033[0m\n", 6);
}
