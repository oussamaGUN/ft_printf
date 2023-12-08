#include <unistd.h>
int main(int ac, char *av[])
{
    char *s = av[1];
    int i = 0;
    if (ac == 2)
    {
        while (s[i])
        {
            if (s[i] == ' ')
                write(1, "   ", 3);
            else
                write(1, &s[i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}