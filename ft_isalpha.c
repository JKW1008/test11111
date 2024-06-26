/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:59:51 by kjung             #+#    #+#             */
/*   Updated: 2024/04/08 17:18:29 by kjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
