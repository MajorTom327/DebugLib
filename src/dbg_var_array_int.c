#include "debug.h"

void	dbg_var_array_int(const char *f, const char *name, const int *str, size_t lvl)
{
	if (!f || !name)
		return ;
	while (*str)
	{
		dbg_var_int(f, name, *str, lvl);
		str++;
	}
}
