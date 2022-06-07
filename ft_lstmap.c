/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweng-ho <chong970620@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:02:10 by cweng-ho          #+#    #+#             */
/*   Updated: 2022/06/07 17:56:14 by cweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *first;
    t_list *new;

    if (!f || !del)
        return (0);
    first = 0;
    while (lst)
    {
        if (!(new = ft_lstnew((*f)(lst->content))))
        {
            while (first)
            {
                new = first->next;
                (*del)(first->content);
                free(first);
                first = new;
            }
            lst = 0;
            return (0);
        }
        ft_lstadd_back(&first, new);
        lst = lst->next;
    }
    return (first);
}