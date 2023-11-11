#include "ft_printf.h"
#include <string.h>

void ft_rev(char *s)
{
    int i = 0;
    int j = 0;
    char tmp;
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
void ft_printf_hex(int a)
{
    char hex_base[] = "0123456789abcdef";
    char hex_value[32];
    int i = 0;
    if (a == 0)
        ft_putnbr(0);
    while (a != 0)
    {
        hex_value[i++] = hex_base[a % 16];
        a /= 16;
    }
    hex_value[i] = '\0';
    ft_rev(hex_value);
    ft_putstr(hex_value);
}