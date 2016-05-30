#include <debug.h>
#include <stdio.h>
#include <sys/ioctl.h>

void	dbg_breakpoint(const char *f, size_t lvl)
{
	struct winsize	w;
	size_t			tmp;

	dbg_info(f, "Press enter key to continue...", lvl);
	write(1, "\033[32m", 5);
	ioctl(0, TIOCGWINSZ, &w);
	tmp = 0;
	while (tmp < (w.ws_col / 3 - 6))
	{
		write(1, " ", 1);
		tmp++;
	}
	tmp = 0;
	while (tmp < (w.ws_col / 3 + 12))
	{
		write(1, "#", 1);
		tmp++;
	}
	write(1, "\033[0m",4);
	while (getchar() != '\n');
}
