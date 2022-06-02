/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:08:30 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/05/26 18:47:21 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;

    if (!dest || !src)
        return (NULL);
    if (dest > src)
    {
        i = (int)n - 1;
        while (i >= 0)
        {
            *(char*)(dest + i) = *(char*)(src + i);
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < (int)n)
        {
            *(char*)(dest + i) = *(char*)(src + i);
            i++;
        }
    }
    return (dest);
}