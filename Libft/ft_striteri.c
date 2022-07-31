#include "libft.h"

void ft_striteri(char *str, void (*f)(unsigned int, char *))
{
    int i; 
    i = 0;

    while(str[i] != '\0')
    {
        f(i, &str[i]);
        i++;
    }
}

int main()
{
    char str1[] = "abcdefghijklm";
	ft_striteri(str1, NULL);
	printf("%s\n", str1);
    return(0);

}