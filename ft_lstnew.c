/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:35:13 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/06/07 16:17:29 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *elt;

    if (!(elt = (t_list*)malloc(sizeof(*elt))))
        return (0);
    elt->content = content;
    elt->next = 0;
    return(elt);
}