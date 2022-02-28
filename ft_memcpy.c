/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:13:47 by adunne            #+#    #+#             */
/*   Updated: 2022/02/28 16:13:49 by adunne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char        *d;
    const char    *s;

    if (!dst && !src)
        return (dst);
    d = dst;
    s = src;
    while (n)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return (dst);
}