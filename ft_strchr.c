/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:59:19 by adunne            #+#    #+#             */
/*   Updated: 2022/02/22 09:59:25 by adunne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return ((char *)s);
        }
        s++;
    }
    if (c == '\0')
    {
        return ((char *)s);
    }
    return (0);
}

int main () {
   const char str[] = "www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after '%c' is '%s'\n", ch, ret);
   
   return (0);
}