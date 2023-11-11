#ifndef FT_PRINTF
#define FT_PRINTF

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int ft_printf(const char *s, ...);
void ft_putchar(char c);
void ft_putstr(char *s);
void	ft_putnbr(int nb);
void	ft_putnbr_unsigned(unsigned int nb);
void ft_printf_hex(int a);
void ft_printf_HEX(int a);
#endif