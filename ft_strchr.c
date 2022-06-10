/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:11:44 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/06/10 16:35:53 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	chr;

	i = 0;
	chr = c;
	str = (char *)s;
	if (c == 0)
		return (&str[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (c == '\0')
		{
			if (str[i + 1] == '\0')
				return (&str[i + 1]);
		}
		if (s[i] == chr)
			return (&str[i]);
		i++;
	}
	return (0);
}
