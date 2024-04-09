/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:19:18 by kjung             #+#    #+#             */
/*   Updated: 2024/04/08 17:19:19 by kjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

void    ft_putstr_fd(char *s, int fd)
{
    if (!s || fd < 0)
        return ;
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
}
