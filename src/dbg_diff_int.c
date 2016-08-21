#include "debug.h"

void	dbg_diff_int(const char *f, const char *name, int v, int st, size_t lvl)
{
	static int save = 0;

	if (st == 0)
	{
		save = v;
		return ;
	}
	if (!f || !name)
		return;
	write(2, "\033[33m(", 6);
	write(2, f, ft_strlen(f));
	write(2, ")\033[32m", 6);
	ft_spacelevel(lvl);
	write(2, name, ft_strlen(name));
	write(2, ":\t\033[35m[", 8);
	dbg_putnbr(save);
	write(2, "]\t\033[35m[", 8);
	dbg_putnbr(v);
	write(2, "]\033[0m\n", 6);
}
