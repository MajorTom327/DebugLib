#include "debug.h"

void	dbg_var_char(const char *f, const char *name, const char c,size_t lvl)
{
	if (!f || !name)
		return;
	write(1, "\033[33m(", 6);
	write(1, f, ft_strlen(f));
	write(1, ")\033[32m", 6);
	ft_spacelevel(lvl);
	write(1, name, ft_strlen(name));
	write(1, ":\t\033[35m[", 8);
	write(1, &c, 1);
	write(1, "]\033[0m\n", 6);
}
