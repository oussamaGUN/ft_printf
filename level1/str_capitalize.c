#include <stdio.h>
#include <unistd.h>
void low(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        i++;
    }
}
void w_capitale(char *s)
{
    int i = 0;
    low(s);

    if (s[i] >= 'a' && s[i] <= 'z')
    {
        s[i] -= 32;
        write(1, &s[i], 1);
        i++;
    }
    while (s[i])
    {
        if ((s[i] == ' ' || s[i] == 9) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
            s[i + 1] -= 32;
        write(1, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
}
int main(int ac, char *av[])
{
    if (ac > 1)
    {
        int i = 1;
        while (i < ac)
        {
            w_capitale(av[i]);
            i++;
        }
    }
}