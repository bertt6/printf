#include "printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}


int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		i = i + ft_putchar('-');
		i = i + ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		i = i + ft_putnbr(n / 10);
		i = i + ft_putchar(n % 10 + '0');
	}
	else
		i = i + ft_putchar(n + '0');
	return (i);
}

int ft_print_unsg_nbr(unsigned int i)
{
	if(i >= 10)
	{
		i = i + ft_putnbr( i / 10);
		i = i + ft_putnbr( i % 10);
	}
	else
		i = i + ft_putchar(i + '0');
	return (i);
}

int ft_print_pointer(unsigned long long i)
{
	if(i >= 16)
	{
		i = i + ft_putnbr( i / 10);
		i = i + ft_putnbr( i % 10);
	}
	else
	{
		if(i % 16 < 10)
			i = i + ft_putchar((i % 16) + '0');
		else
			i = i + ft_putchar('a' + (i % 16));
	}
	return (i);
}

int hex(unsigned long long i)
{
	char *base;
	base = "0123456789abcdef";

	if(i > 16)
	{
		i += ft_putchar(*base / 16);
		i += ft_putchar(*base % 16);
	}
	
	return (i);
}


