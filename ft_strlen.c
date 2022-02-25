/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:27:36 by adunne            #+#    #+#             */
/*   Updated: 2022/02/21 16:27:39 by adunne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
    {
        i++;
    }
    return (i);
}

/*#include <stdio.h>
int main ()
{
    char c[] = "Hello";
    printf("%zu", ft_strlen(c));
    return 0;
}*/