/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 20:35:48 by cmaginot          #+#    #+#             */
/*   Updated: 2021/04/17 20:52:18 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *str;

	str = s1;
	while(*str != '\0')
		str++;
	ft_strncpy(str, s2, n);
	str[n] = '\0';
	return(s1);
}