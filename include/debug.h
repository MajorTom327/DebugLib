#ifndef DEBUG_H
# define DEBUG_H
# include <unistd.h>

void	dbg_breakpoint(const char *f, size_t lvl);
void	dbg_title(const char *str);
void	dbg_info(const char *f, const char *data, size_t lvl);
void	dbg_diff_int(const char *f, const char *name, int v, int st, size_t lvl);
void	dbg_var_char(const char *f, const char *name, const char c, size_t lvl);
void	dbg_var_str(const char *f, const char *name, const char *str, size_t lvl);
void	dbg_var_int(const char *f, const char *name, const int c,size_t lvl);
size_t	ft_strlen(char const *s);
void	ft_putnbr(int n);
#endif
