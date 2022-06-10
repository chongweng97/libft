/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:40:23 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/06/10 16:48:56 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pt_dest;
	char	*pt_src;

	pt_dest = (char *)dest;
	pt_src = (char *)src;
	i = 0;
	if (pt_dest || pt_src)
	{	
		while (i < n)
		{
			pt_dest[i] = pt_src[i];
			i++;
		}
	}
	return (dest);
}
