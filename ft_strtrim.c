/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:04:18 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/05/31 14:56:42 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_char_in_set(char c, const char *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(const char *s1, const char *set)
{
    char *str;
    size_t i;
    size_t start;
    size_t end;

    start = 0;
    while (s1[start] && ft_char_in_set(s1[start], set))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_char_in_set(s1[end - 1], set))
        end--;
    str = (char*)malloc(sizeof(*s1) * (end - start + 1));
    if (!str)
        return (0);
    i = 0;
    while (start < end)
        str[i++] = s1[start++];
    str[i] = 0;
    return (str);
}