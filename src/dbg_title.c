#include <debug.h>
#include <sys/ioctl.h>

void	dbg_title(const char *str)
{
	struct winsize	w;
	size_t			tmp;

	if (str == NULL)
		return;
	ioctl(0, TIOCGWINSZ, &w);
	tmp = 0;
	while (tmp < (w.ws_col / 2 - ft_strlen(str) / 2))
	{
		write(1, " ", 1);
		tmp++;
	}
	write(1, "\033[90m[", 6);
	write(1, str, ft_strlen(str));
	write(1, "]\033[0m\n", 6);
}
