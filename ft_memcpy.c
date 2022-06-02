/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:40:23 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/05/31 19:56:47 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    if (!dest)
        return (0);
    i = 0;
    while (i < n)
    {
        *(char*)(dest + i) = *(char*)(src + i);
        i++;
    }
    return (dest);
}