#include "libft.h"

//Whitespcaes 
int whitespace(int c)
{
    return(c == ' ' || c == '\t' || c == '\n');
}

//getting first position of character
int first_position(char const *str)
{
    int i = 0;
    while(whitespace(str[i]))
        i++;
    return (i);
}

//get last poisition of the string 
int last_position(char const *str)
{
    int i = ft_strlen(str) - 1;
    while(whitespace(str[i]))
        i--;
    return(i);
}

//getting the trim length 
int trim_length(char const *str)
{
    return (last_position(str) - first_position(str));
}

//Returning the string to the new destination 
char *ft_strtrim(char const *str1, char const *str2)
{
    int i;
    int len;
    int start; 
   unsigned char *ptr2 = (unsigned char *)str2;

    if(str1 != NULL)
    {
        i = 0;
        len = trim_length(str1) + 1; 
        ptr2 = (unsigned char *)malloc(len); 
        start = first_position(str1);
    }

    while(i < len)
    {
       ptr2[i] = str1[start];
        i++; 
        start++;
    }

    ptr2[i] = '\0'; 

    return ((char *)ptr2);
}

int main()
{
    char *str1 = "      Hello World  !  ";
    char *str2 = "";

    printf("%s\n", ft_strtrim(str1, str2));
    return 0;

}