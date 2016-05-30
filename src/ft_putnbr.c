#include "debug.h"

static int	ft_tpow(int nb)
{
	int result;

	result = 0;
	while (nb)
	{
		result++;
		nb /= 10;
	}
	return (result);
}

static int	ft_pow(int nb, int pow)
{
	if (pow > 1)
		return (nb * ft_pow(nb, pow - 1));
	if (pow <= 0)
		return (1);
	return (nb);
}

static void	ft_print_nb(int n, int pow)
{
	char str[2];
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	while (pow >= 0)
	{
		str[0] = n / ft_pow(10, pow) + '0';
		write(1, str, 1);//Problems
		n = n % ft_pow(10, pow);
		pow--;
	}
}

void		ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1,"-2147483648", 11);
		return ;
	}
	ft_print_nb(n, ft_tpow(n) - 1);
}
