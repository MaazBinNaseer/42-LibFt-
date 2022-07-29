#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *str, int fd)
{
    if(str != NULL)
    {
         ft_putstr_fd(str, fd);
         ft_putchar_fd('\n', fd);

    }
}