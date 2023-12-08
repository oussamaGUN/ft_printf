#include <string.h>
#include <stdio.h>
int ft_strchr(char c,const char *s1)
{
    int i = 0;
    while (s1[i])
    {
        if (s1[i] == c)
            return 0;
        i++;
    }
    return 1;
}
size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    int val = 0;
    size_t k = 0;
    while (val = ft_strchr(s[k], reject) == 1 && s[k])
        k++;
    return k;
}
int main(int ac, char *av[])
{
    char str[] = "hell world how are you";
    char s[] = "ow";
    printf("%zu\n", ft_strcspn(str, s));
    printf("%zu\n", strcspn(str, s));
}