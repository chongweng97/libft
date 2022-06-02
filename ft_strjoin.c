/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:12:41 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/05/31 13:58:50 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    char *str;
    size_t i;
    size_t j;

    str = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!str)
        return (0);
    i = 0;
    j = 0;
    while (s1[i])
    {
        str[j++] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        str[j++] = s2[i];
        i++;
    }
    str[j] = 0;
    return (str);
}