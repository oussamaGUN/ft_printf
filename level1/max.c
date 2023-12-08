#include <stdio.h>
int		max(int* tab, unsigned int len)
{
    int max = 0;
    int i = 0;
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return max;
}
int main()
{
    int arr[] = {11, 2,3,4,5,6};
    printf("%d\n", max(arr, 6));
}