#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
    va_list args;
    va_start(args, s);
    unsigned int i = 0;

    while (s[i])
    {
        if (s[i] == '%')
        {
            i++;
            if (s[i] == 'c')
            {
                char c = va_arg(args, int);
                ft_putchar(c);
            }
            else if (s[i] == 's')
            {
                char *s = va_arg(args, char *);
                ft_putstr(s);
            }
            else if(s[i] == 'd' || s[i] == 'i')
            {
                int d = va_arg(args, int);
                ft_putnbr(d);
            }
            else if (s[i] == 'u')
            {
                unsigned int u = va_arg(args, unsigned int);
                ft_putnbr_unsigned(u);
            }
            else if (s[i] == 'x')
            {
                ft_printf_hex(va_arg(args, int));
            }
            else if (s[i] == 'p')
            {
                ft_printf_hex(va_arg(args, int));
            }
            else if (s[i] == 'X')
                ft_printf_HEX(va_arg(args, int));
            else if (s[i] == '%')
                ft_putchar('%');
            
        }
        else
            ft_putchar(s[i]);
        i++;
    }
    va_end(args);
    return i;
}
int main()
{
    char c = 'z';
    char s[] = "world";
    int d = 10;
    unsigned int u = -123;
    int x = 500;
    int X = 500;
    void *p;
    ft_printf("hello %c %s %d %i %u %x %X %% %p", c, s, d, d, u, x, X, p);
    printf("\nhello %c %s %d %i %u %x %X %% %p", c, s, d, d, u, x, X, p);

    printf("\n%d", 123 % 16);
}