/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:43:59 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/06/10 16:47:17 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	void			*match_byte;

	i = 0;
	str = (unsigned char *)s;
	match_byte = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{	
			match_byte = &str[i];
			break ;
		}
		i++;
	}
	return (match_byte);
}
