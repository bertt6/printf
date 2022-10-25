#include "printf.h"

/*int AddNumbers(int n, ...)
{
    int sum;
    int i;

    i = 0;
    sum = 0;
    va_list ptr;
    va_start(ptr, n);
    while(i < n)
    {
        sum += va_arg(ptr, int);
        i++;
    }
    va_end(ptr);
    return (sum);
}
*/

int ft_printf(char *str, ...)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[i] == '%')
        {
            i++;
            if(str[i] == 'c')
                ft_putchar(str[i]);
            if(str[i] == 's')
                ft_putstr(va_arg(ap, (char *)));

                
        }
    }
}

int main()
{
    char *a = "%d %c as";
    printf("%",);
}