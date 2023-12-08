#include <unistd.h>
#include <stdio.h>
int main(int ac, char *av[])
{
    int i = 1;
    int mul = 0;
    if (ac == 2)
    {
        while (i < 10)
        {
            write(1, &i, 1);
            write(1, "*", 1);
            write(1, av[2], 1);
            write(1, "=", 1);
            mul = i * atoi(av[2]);
            write(1, &mul, 1);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);

}