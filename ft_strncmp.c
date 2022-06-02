/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:10:58 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/05/26 15:09:48 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  cmp_char(char c1, char c2)
{
    if ((unsigned char)c1 != (unsigned char)c2)
        return ((unsigned char)c1 - (unsigned char)c2);
    return (0);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    i = 0;
    while (s1[i] && s2[i] && i < n)
    {
        if (cmp_char(s1[i], s2[i]))
            return (s1[i] - s2[i]);
        i++;
    }
    if (i < n)
        return (cmp_char(s1[i], s2[i]));
    return (0);
}