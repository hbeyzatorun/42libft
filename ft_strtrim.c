
#include "libft.h"

 int ft_set_i(char  c, char const   *set)
    {
        int i;
        i = 0;
        while(set[i])
        {
            if(set[i] == c)
                return(1);
            i++;
        }
        return (0);
    }
char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int i;
    char    *result;

    start = 0;
    while(s1[start] && ft_set_i(s1[start], set))
    {
            start++;
    }
    end = ft_strlen(s1) - 1;
    while(end >= start && ft_set_i(s1[end],set))
    {
        end--;
    }
    result = (char *)malloc(end - start  + 1 + 1);
    if(!result)
        return(NULL);
    i = 0;
    while(start <= end)
    {
        result[i] = s1[start];
        i++;
        start++;
    }
    result[i] = '\0';
    return(result);
}