#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
    int i;
    if(!s)
        return(NULL);
    i = 0;
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n',fd);
}