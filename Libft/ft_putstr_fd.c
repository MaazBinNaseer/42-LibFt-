#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *str, int fd)
{
    int x; 
    if (str != NULL)
    {
        x = 0;
        while(str[x] != '\0') 
        {
            ft_putchar_fd(str[x], fd);
            x++;
        }
    }    
}