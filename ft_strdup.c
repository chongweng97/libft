/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:00:02 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/05/30 18:06:46 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *str;
    size_t i;

    if (!s)
        return (0);
    str = (char*)malloc(sizeof(*s) * (ft_strlen(s) + 1));
    if (!str)
        return (0);
    i = 0;
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = 0;
    return (str);
}