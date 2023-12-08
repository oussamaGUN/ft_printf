#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char *av[])
{
    if (ac > 1)
    {
        int sum = 0;
        int i = 1;
        while (i < ac)
        {
            sum += atoi(av[i]);
            i++;
        }
        printf("%d\n", sum);

    }
}