/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 22:44:22 by cmaginot          #+#    #+#             */
/*   Updated: 2021/04/17 22:52:00 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;
	size_t	i;

	if (!(str = malloc((n + 1) * sizeof(char))))
		return (0);
	i = -1;
	while (++i < n)
		str[i] = s1[i];
	str[i] = '\0';
	return (str);
}