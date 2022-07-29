#include "libft.h"

char *ft_strjoin(char const *str1, char const *str2)
{
   char *result;
   size_t i;
   size_t j; 

     if(str1 == NULL && str2 == NULL)
        return NULL;
   result = malloc(sizeof(char)*(ft_strlen(str1) + ft_strlen(str2) + 1));
   if(result == NULL)
        return NULL;

    i = 0;
    j = 0; 
  while(str1 != NULL && str1[j] != '\0')
        result[i++] = str1[j++];
    j = 0;
 while(str2 != NULL && str2[j] != '\0')
        result[i++] = str2[j++];
    
    result[i++] = '\0';

    return result;

}

int main()
{
    char str1[] = "Welcome to "; 
    char str2[] = "the world of Fifa 2020";

    printf("The string is : %s\n", ft_strjoin(str1, str2));
    return 0; 
}