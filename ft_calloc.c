/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:01:19 by kjung             #+#    #+#             */
/*   Updated: 2024/04/08 17:18:22 by kjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (!(tmp = malloc(count * size)))
		return (NULL);
	ft_bzero(tmp, count * size);
	return (tmp);
}
