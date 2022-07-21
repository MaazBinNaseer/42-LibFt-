/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:51:59 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/21 15:02:43 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

*/
#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
    unsigned char ch = c; 
    
    if(!str || !c)
        return (NULL); 
    while (*str)
        str++;
    str--;
    while((*str) && (char)*str != ch)
        str--;
    if(ch == (unsigned char)*str)
        return ((char *)str);
    else 
        return (NULL);
}

int main()
{
    const char string[] = "The string is wow"; 
    int x = 'e'; 
    const char *p;
     
    p = ft_strrchr(string, x); 
    printf("String starting from %c is: %s\n", x, p);
    //Returning Null  
    int y = 'z';
    p = ft_strrchr(string, y);    
    printf("String starting from %c is: %s\n", y, p);
    
    p = strrchr(string, x);
    printf("String starting from %c is: %s\n", x, p);
    return (0);
    

}