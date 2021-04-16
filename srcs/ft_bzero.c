/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:20:24 by cmaginot          #+#    #+#             */
/*   Updated: 2021/04/16 03:52:48 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*str;
	size_t i;

	str = (unsigned char *)b;
	i = -1;
	while (++i < n)
		str[i] = 0;
}