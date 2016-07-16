#include "debug.h"

void	dbg_var_array_char(const char *f, const char *name, const char *str, size_t lvl)
{
	if (!f || !name)
		return ;
	while (*str)
	{
		dbg_var_char(f, name, *str, lvl);
		str++;
	}
}
