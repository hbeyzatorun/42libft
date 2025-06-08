
#include "libft.h"

char    *ft_strdup(const char *s)
{
    int i;
    int len;
    char    *dup;

    i = 0;
    len = ft_strlen(s);
    dup = malloc(sizeof(char)* (len + 1));
    if(!dup)
        return(NULL);
    while(s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);

}