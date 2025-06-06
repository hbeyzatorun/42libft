#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int len1;
    int len2;

    char *result;
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    int totallen;
    int i;
    int j;
    totallen = len1 + len2 + 1;
    
    result = malloc(totallen);
    if(!result)
        return(NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        result[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        result[i] = s2[j];
        j++;
        i++;
    }
    result[i] = '\0';
    return(result);
}