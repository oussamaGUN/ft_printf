/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:31:47 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/12 10:31:49 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_u(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_integers(char c, va_list args)
{
	int				d;
	unsigned int	u;
	int				count;

	count = 0;
	if (c == 'd' || c == 'i')
	{
		d = va_arg(args, int);
		count += ft_putnbr(d);
	}
	else if (c == 'u')
	{
		u = va_arg(args, unsigned int);
		count += ft_len_u(u);
		ft_putnbr_unsigned(u);
	}
	return (count);
}

int	ft_chars(char c, va_list args)
{
	char	z;
	char	*s;
	int		count;

	count = 0;
	if (c == 'c')
	{
		z = va_arg(args, int);
		count += ft_putchar(z);
	}
	else if (c == 's')
	{
		s = va_arg(args, char *);
		count += ft_putstr(s);
	}
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}
