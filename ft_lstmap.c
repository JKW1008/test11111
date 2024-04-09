/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:18:57 by kjung             #+#    #+#             */
/*   Updated: 2024/04/08 17:18:58 by kjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*func)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *cur;

    new = ft_lstnew(func(lst->content));
    cur = new;
    lst = lst->next;
    while (lst)
    {
        cur-> next = ft_lstnew(func(lst->content));
        cur = cur->next;
        if (cur == NULL)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        lst = lst->next;
    }
    return (new);
}
