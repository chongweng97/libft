/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:36:29 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/05/30 17:23:31 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    
    i = 0;
    while (i < n)
    {
        if (*(unsigned char*)(s1 + i) != *(unsigned char*)(s2 + i))
            return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
        i++;
    }
    return (0);
}