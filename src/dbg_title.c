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
	write(2, "\033[90m", 5);
	while (tmp < (w.ws_col / 2 - ft_strlen(str) / 2 - 2))
	{
		write(2, "-", 1);
		tmp++;
	}
	write(2, "\033[34m[", 6);
	write(2, str, ft_strlen(str));
	write(2, "]\033[90m", 6);
	tmp = 0;
	while (tmp < (w.ws_col / 2 - ft_strlen(str) / 2 - 2))
	{
		write(2, "-", 1);
		tmp++;
	}
	write(2, "\033[0m\n", 5);
}
