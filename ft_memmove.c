/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:43:57 by kjung             #+#    #+#             */
/*   Updated: 2024/04/08 17:19:11 by kjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

void	ft_memmove(void *dest, const void *src, size_t len)
{
	void *result;

	result = dest;
	if (dest == src)
		return (result);
	if (dest < src)
	{
		while (len-- > 0)
			*(unsigned char *)dest++ = *(unsigned char *)src++;
	}
	else
	{
		while (len-- > 0)
			*(unsigned char *)(dest + len) = *(unsigned char *)(src + len);
	}
	return (result);
}
