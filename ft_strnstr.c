/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:05:10 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/06/09 15:57:20 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (0);
	if (!needle || !needle[0])
	{
		return ((char *)haystack);
	}
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle [j]
			&& i + j < len && haystack [i + j] == needle [j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
			i++;
	}
	return (0);
}
