/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:39:29 by cmaginot          #+#    #+#             */
/*   Updated: 2021/04/17 23:03:56 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t 			i;

	str = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if(str[n - i - 1] == (unsigned char)c)
			return (str + n - i - 1);
	return (0);
}