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
/*
#include <limits.h>
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = ft_printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)12355543 + 1;
    addr = &ui;
    ft_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    ft_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    ft_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    ft_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    ft_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    ft_printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    ft_printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = ft_printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    ft_printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}*/
