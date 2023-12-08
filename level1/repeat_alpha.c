#include <unistd.h>
#include <stdio.h>
int lcount(char av)
{
    char lalpha[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    while (lalpha[i] != av && lalpha[i])
        i++;
    return i;
}
int ucount(char av)
{
    char ualpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = 0;
    while (ualpha[i] != av && ualpha[i])
        i++;
    return i;
}
int main(int ac,char *av[])
{
    int i = 0;
    int count = 0;
    int j = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                count = lcount(av[1][i]);
               // printf("%d", count);
                while (count >= j)
                {
                    write(1, &av[1][i], 1);
                    j++;
                }
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                count = ucount(av[1][i]);
                while (count >= j)
                {
                    write(1, &av[1][i], 1);
                    j++;
                }

            }
            else
                write(1, &av[1][i], 1);
                
            i++;
            j = 0;
        }
    }
    else
        write(1, "\n", 1);
    write(1, "\n", 1);
}