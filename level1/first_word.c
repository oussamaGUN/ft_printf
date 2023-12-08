#include <stdio.h>
#include <unistd.h>
int main(int ac, char const *av[])
{
    int i = 0;
    while (av[1][i] == ' ' && av[1][i])
        i++;
    if (ac != 2)
        printf("error");
    else
    {
        while ((av[1][i] != ' ' || (av[1][i] >= 9 && av[1][i] <= 13))  && av[1][i])
            write(1, &av[1][i++], 1);
    }
    printf("\n");
    return 0;
}
