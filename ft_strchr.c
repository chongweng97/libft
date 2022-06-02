/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:11:44 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/05/25 18:11:58 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    if (!s)
        return (NULL);
    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char*)(s + i));
        i++;

    }
    if (s[i] == (char)c)
        return ((char*)(s + i));
    return (NULL);
}  