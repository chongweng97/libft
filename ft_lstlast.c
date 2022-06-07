/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:53:02 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/06/07 15:05:58 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    while (lst)
    {
        if (!lst->next)
            return (lst);
        lst = lst->next;
    }
    return (lst);
}