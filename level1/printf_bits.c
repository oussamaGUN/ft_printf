#include <unistd.h>
#include <stdlib.h>
void	print_bits(unsigned char octet)
{
    char bin[] = "01";
    char arr[] = "00000000";
    unsigned int num = octet - 48;
    int i = 0;
    int len = 8;
    arr[len] = '\0';
    while (num != 0)
    {
        arr[len] = bin[num % 2];
        len--;
        num /= 2;
    }
    
    while (arr[i])
        write(1, &arr[i++], 1);
}
int main()
{
    unsigned char c = '2';
    print_bits(c);
}