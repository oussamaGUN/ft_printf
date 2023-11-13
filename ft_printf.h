/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:48:30 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/12 10:48:32 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int nb);
void	ft_putnbr_unsigned(unsigned int nb);
int		ft_len(int n);
int		ft_printf_hex(unsigned int a);
int		ft_printf_big(unsigned int a);
int		ft_pointer(void *ptr);
int		ft_printf_pointer(unsigned long int a);
void	ft_rev(char *s);
int		ft_integers(char c, va_list args);
int		ft_chars(char c, va_list args);
int		ft_all_base(char c, va_list args);

#endif
