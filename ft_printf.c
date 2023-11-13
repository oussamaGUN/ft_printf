/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:29:45 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/12 10:29:47 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list			args;
	unsigned int	i;
	int				count;

	count = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'd' || s[i] == 'i' || s[i] == 'u')
				count += ft_integers(s[i], args);
			if (s[i] == 'c' || s[i] == 's' || s[i] == '%')
				count += ft_chars(s[i], args);
			else if (s[i] == 'x' || s[i] == 'X' || s[i] == 'p')
				count += ft_all_base(s[i], args);
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}
