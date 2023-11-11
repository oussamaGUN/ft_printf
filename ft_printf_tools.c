#include "ft_printf.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
        write(1, &s[i++], 1);
}
void	ft_putnbr(int nb)
{
	if (nb < 0)
    {
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
    {
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
        ft_putchar(nb + 48);
}
void	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb >= 10)
    {
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
        ft_putchar(nb + 48);
}