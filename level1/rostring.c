#include <stdio.h>
#include <stdlib.h>

char *ft_trim(char *s)
{
    int i = 0;
    int count = 0;
    while (s[i] == ' ' && s[i])
        i++;
    while (s[i])
    {
        while (s[i] != ' ' && s[i])
        {
            i++;
            count++;
        }
        while(s[i] == ' ' && s[i])
            i++;
        if (s[i])
            count++;
    }
    char *str = malloc(sizeof(char) * (count + 1));
    if (!str)
        return NULL;
    i = 0;
    int j = 0;
    while (s[i] == ' ' && s[i])
        i++;
    while (s[i])
    {
        while (s[i] != ' ' && s[i])
            str[j++] = s[i++];
        while(s[i] == ' ' && s[i])
            i++;
        if (s[i])
            str[j++] = ' ';
    }
    return str;
}
int word(char *s)
{
    int i = 0;
    int count = 0;
    while (s[i] == ' ' && s[i])
        i++;
    while (s[i])
    {
        count++;
        while (s[i] != ' ' && s[i])
            i++;
        while(s[i] == ' ' && s[i])
            i++;
    }
    return count;
}
int main(int ac, char *av[])
{
    char *str;
    if (ac > 1)
    {
        str = ft_trim(av[1]);
        int i = 0;
        if (word(str) == 1)
        {
            while (str[i] == ' ')
                i++;
            while (str[i])
                printf("%c", str[i++]);
        }
        else
        {
            while (str[i] != ' ')
                i++;
            while (str[i] == ' ')
                i++;
            if (str[i])
                while (str[i])
                    printf("%c", str[i++]);
            printf(" ");
            i = 0;
            while (str[i] != ' ')
                printf("%c", str[i++]);
        }
        printf("\n");
    }
    else
        printf("\n");
    free(str);
}