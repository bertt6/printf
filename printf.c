#include "printf.h"

int ft_check(va_list *list, char a)
{
    int result;
    int i;

    i = 0;
    result = 0;
    if(a == 'c')
        result += ft_putchar(va_arg(*list, int));
    else if(a == '%')
        result += ft_putchar('%');
    else if(a == 's')
        result += ft_putstr(va_arg(*list, char *));
    else if(a == 'd')
        result += ft_putnbr(va_arg(*list, int));
    return (result);
}

int ft_printf(const char *s, ...)
{
    int i;
    va_list list;
    int result;

    i = 0;
    result = 0;
    va_start(list, s);
    while(s[i] && s)
    {
        if (s[i] == '%' && s[i + 1])
            result += ft_check(&list, s[++i]);
        else
            result += ft_putchar(s[i]);
        i++;
    }
    va_end(list);
    return(result);
}
#include <stdio.h>
int main()
{
    ft_printf("%d", 12213123);
}