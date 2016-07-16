#include "debug.h"

void	dbg_var_array_str(const char *f, const char *name, const char **str, size_t lvl)
{
	if (!f || !name)
		return ;
	while (*str)
	{
		dbg_var_str(f, name, *str, lvl);
		str++;
	}

}
