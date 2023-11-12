/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:42:51 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/12 10:42:52 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_all_base(char c, va_list args)
{
	void	*p;
	int		count;

	count = 0;
	if (c == 'X')
		count += ft_printf_big(va_arg(args, int));
	if (c == 'x')
		count += ft_printf_hex(va_arg(args, int));
	else if (c == 'p')
	{
		p = va_arg(args, void *);
		count += ft_pointer(p);
	}
	return (count);
}
