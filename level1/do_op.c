#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void ft_plus(char *s1, char *s2)
{
    int num1 = atoi(s1);
    int num2 = atoi(s2);
    printf("%d\n", num1 + num2);
}
int main(int ac, char *av[])
{
    
    if (ac == 4)
    {
        if (av[2][0] == '+')
            ft_plus(av[1], av[3]);
    }
}