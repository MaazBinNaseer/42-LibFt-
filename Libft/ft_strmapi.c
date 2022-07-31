#include "libft.h"

char *ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
    int i; 
    char *str1; 

    if(!str || !f)
        return (0);
    str1 = malloc(ft_strlen(str) + 1);
    if(!str1 || str1 == NULL)
        return (NULL);
    while( str1 != NULL && str[i] != '\0')
    {
        str1[i] = f(i, str[i]);
        i++;
    }
    str1[i] = '\0';
    return (str1); 
}

char f(unsigned int i, char c)
{
	char str;
    i = 2;
	str = c + i;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
    return(0);
}