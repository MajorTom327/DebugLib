#include "debug.h"

void	dbg_info(const char *f, const char *data, size_t lvl)
{
	if (f == NULL || data == NULL)
		return ;
	write(2, "\033[33m(", 6);
	write(2, f, ft_strlen(f));
	write(2, ")\033[32m", 6);
	ft_spacelevel(lvl);
	write(2, data, ft_strlen(data));
	write(2, "\033[0m\n", 5);
}
