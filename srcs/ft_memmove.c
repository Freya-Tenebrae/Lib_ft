/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:20:24 by cmaginot          #+#    #+#             */
/*   Updated: 2021/04/17 23:21:22 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*strdst;
	unsigned char	*strsrc;
	size_t 			i;

	if (dst == 0 && src == 0)
		return (dst);
	strdst = (unsigned char *)dst;
	strsrc = (unsigned char *)src;
	i = -1;
	if (strdst > strsrc)
		while (++i < len)
			strdst[len - i - 1] = strsrc[len - i - 1];
	else
		while (++i < len)
			strdst[i] = strsrc[i];
	return (dst);
}