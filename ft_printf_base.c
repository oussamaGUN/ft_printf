/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:37:17 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/12 10:37:19 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_rev(char *s)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	while (j < i / 2)
	{
		tmp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = tmp;
		j++;
	}
}

int	ft_printf_hex(unsigned int a)
{
	char	*hex_base;
	char	hex_value[32];
	int		i;
	int		count;

	count = 0;
	hex_base = "0123456789abcdef";
	i = 0;
	if (a == 0)
		count += ft_putnbr(0);
	while (a != 0)
	{
		hex_value[i++] = hex_base[a % 16];
		a /= 16;
	}
	hex_value[i] = '\0';
	ft_rev(hex_value);
	count += ft_putstr(hex_value);
	return (count);
}
