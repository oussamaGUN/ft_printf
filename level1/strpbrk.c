#include <string.h>
#include <stdio.h>
int ft_strchr(char s2,const char *s1)
{
    int i = 0;
    while (s1[i])
    {
        if (s1[i] == s2)
            return 0;
        i++;
    }
    return 1;
}
char	*ft_strpbrk(const char *s1, const char *s2)
{
    char *s = (char *)s1;
    int val = 0;
    size_t k = 0;
    while (ft_strchr(*s, s2) == 1 && *s)
        *s++;
    return s;
}
int main(int ac, char *av[])
{
    char str[] = "hello wzorld how are you";
    char s[] = "m";
    printf("%s\n", ft_strpbrk(str, s));
    //printf("%s\n", strpbrk(str, s));
}