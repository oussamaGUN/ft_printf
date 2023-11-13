/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:46:40 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/12 10:46:50 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_big(unsigned int a)
{
	char	*hex_base;
	char	hex_value[32];
	int		i;
	int		count;

	count = 0;
	hex_base = "0123456789ABCDEF";
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
