/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:21:33 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/05/30 18:00:12 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *s)
{
    long i;
    int negative;
    long result;

    i = 0;
    negative = 0;
    result = 0;
    while (s[i] != '\0' && (s[i] >= 9 && s[i]<= 13) || s[i] == 32)
        i++;
    if (s[i] != '\0' && s[i] == '-')
    {
        negative = 1;
        i++;
    }
    else if (s[i] == '+')
        i++; 
    while (s[i] != '\0' && ft_isdigit(s[i]))
    {
        result = (s[i] - '0') + (result * 10);
        i++;
    }
    if (negative == 1)
        return (-result);
    return (result);
}