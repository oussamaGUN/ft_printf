#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
    int i = 1;
    int div = 0;
    while (1)
    {
        if (atoi(av[1]) % i == 0 && atoi(av[2]) % i == 0)
        {
            div = i;
        }
        else if (i == atoi(av[1]) || i == atoi(av[2]))
            break;
        i++;
    }
    printf("%d\n", div);
}