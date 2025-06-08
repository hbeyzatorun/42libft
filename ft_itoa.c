
#include "libft.h"


int count_digit(int  n)
{
    int count;

    count = 0;

    if(n == 0)
        return(1);
    if( n < 0)
    {
        count = 1;
        n *= -1;
    }
    while(n > 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}
char    *ft_itoa(int n)
{
    int len;
    char *result;

    if(n == -2147483648)
        return(ft_strdup("-2147483648"));
    
    len = count_digit(n);
    result = malloc(sizeof(char) * (len + 1));
    if(!result)
        return(NULL);
    result[len] = '\0';
    if(n < 0)
    {
        result[0] = '-';
        n = -n;
    }
    if(n == 0)
    {
        result[0] = '0';
        return(result);
    }
    while(n > 0)
    {
        len--;
        result[len] = (n % 10) + 48;
        n = n / 10;
    }
    return(result);
}