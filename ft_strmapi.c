/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:37:42 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/06/01 12:27:15 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char *str;
    size_t i;

    if (!(str = ft_strdup(s)))
        return (0);
    i = 0;
    while (str[i])
    {
        str[i] = (*f)(i, str[i]);
        i++;
    }
    return (str);
}