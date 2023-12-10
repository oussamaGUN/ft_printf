#include <unistd.h>
#include <stdio.h>
int ft_strchr(char *s, char c, int len)
{
	int i = 0;
	while (s[i] && i < len)
	{
		if (s[i] == c)
			return 0;
		i++;
	}
	return 1;
}
int main(int ac, char *av[])
{
	if (ac == 3)
	{
		char arr[250];
		char *s1 = av[1];
		char *s2 = av[2];
		int i = 0;
		int j = 0;
		int k = 0;
		while (s1[i])
		{
			j = 0;
			while (s2[j])
			{
				if (s1[i] == s2[j])
				{
						if (ft_strchr(arr, s1[i], i) == 1)
						{
							arr[k] = s1[i];
							k++;
							break;
						}
				}
				j++;
			}
			i++;
		}
		arr[k] = '\0';
		int u = 0;
		while (arr[u])
			write(1, &arr[u++], 1);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}