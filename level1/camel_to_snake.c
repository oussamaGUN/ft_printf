#include <unistd.h>
int main(int ac, char *av[])
{
    char *s = av[1];
    int i = 0;
    if (ac == 2)
    {
        while (s[i])
        {
            write(1, &s[i], 1);
            if (s[i + 1] >= 'A' && s[i + 1] <= 'Z')
            {
                write(1, "_", 1);
                s[i + 1] += 32;
            }
                
            i++;
        }
    }
    else
        write(1, "\n", 1);
    write(1, "\n", 1);
}