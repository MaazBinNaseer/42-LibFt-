#include "libft.h"
#include <stdio.h>

 int ft_itoa_size(int n)
{
    //Handling the size of the integers 
    int size; 
    size = 0; 
    if(n == -2147483648)
        return(11); 
    if(n < 0)
    {
        n = -n; 
        size++;
    }
    while(n > 9)
    {
        n = n /10; 
        size++;
    }
    size++; //get to the end; 
    return(size);
}

char *ft_itoa(int n)
{
    char *str; 
    int size; 
    int sign; 

    size = ft_itoa_size(n);
    str = malloc(sizeof(str)*size + 1);
    
    if(!str || str == NULL) //Handling malloc issues 
        return (NULL); 
    
    sign = 1; 
    str[size] = '\0'; 

    if (n < 0)
    {
        sign = -1; 
        str[0] = '-'; //we will assign a negative character at the first side 
    }
    size--; 
    while(n)
    {
        str[size] = (((n % 10)* sign) + '0');
        size--; 
        n = n / 10;
    }
return (str);
}

int main()
{
    int x = 456789; 
    char *ptr; 

    ptr = ft_itoa(x); 

    printf("Printing a string: %s\n", ptr);
    return 0;

}