#include <unistd.h>
#include <stdio.h>
#include <string.h>
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
int main(int ac , char *av[])
{
    char *str1 = av[1];
    char *str2 = av[2];
    char arr[20];
    int k = 0;
    int i = 0;
    int j = 0;
    if (ac == 3)
    {
        while (str1[i])
        {
            while (str2[j])
            {
                if (str1[i] == str2[j])
                {
                    arr[k] = str1[i];
                    k++;
                    break;
                }
                j++;
            }
            i++;
        }
        arr[k] = '\0';
        if (strcmp(arr, str1) != 0)
            printf("\n");
        else
            printf("%s\n", arr);
    }
    else
        printf("\n");
}