
#include "libft.h"

size_t	ft_strlen(const char *s);

char    *ft_substr(char const *s, unsigned int  start, size_t   len)
{
    size_t  i;
    char    *str;
    size_t  str_len;
    size_t  copy;

    i = 0;

    if(!s)
        return(NULL);
    str_len = ft_strlen(s);

    if(start > ft_strlen(s) )
    {
        str = (char *)malloc(1);
        if(!str)
        {
            return (NULL);
        }
        str[0] = '\0';
        return (str);
    }
    if(len > str_len - start)
        copy = str_len - start;    
    else
        copy = len;
    str = (char *)malloc(copy + 1);
    if(!str)
        return(NULL);
    while (i < copy)
    {
        str[i] = s[start + i];
        i++;
    }
    str[copy] = '\0';
    return (str);
}